#include <stdlib.h>
#include <string.h>

int tmult_ok(int x, int y) {
  long p = (long)x * y;
  return p == (int)p;
}

void *copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) {
  /*
   * Allocate buffer for ele_cnt objects, each of ele_size bytes
   * and copy from locations designated by ele_size
   * */

  if (ele_cnt <= 0) {
    return NULL;
  }

  if (!tmult_ok(ele_cnt, ele_size)) {
    return NULL;
  }

  void *result = malloc(ele_cnt * ele_size);
  if (result == NULL) {
    /* malloc failed*/
    return NULL;
  }

  void *next = result;
  int i;
  for (i = 0; i < ele_cnt; i++) {
    /*Copy object i to destination*/
    memcpy(next, ele_src[i], ele_size);
    /*Move pointer to next memory region*/
    next += ele_size;
  }
  return result;
}
