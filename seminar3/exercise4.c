void *copy_elements(void *ele_src[], int ele_cnt, size_t ele_size) {
  /*
   *allocate buffer for ele_cnt objects, each of ele_size bytes and
   copy from locations designated by ele_src
   *
   * */

  void *result = malloc(ele_cnt * ele_size);
  if (result == NULL) {
    return NULL;
  }
}
