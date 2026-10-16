#include<stdio.h>
typedef struct {
	int a[2];
	double d;
} struct_t;

double fun(int i){
	volatile struct_t s;
	s.d = 3.14;

	if (i<0 || i >= 2){
		fprintf(stderr, "Error: array index out of bound");
		return s.d;
	}
	s.a[i] = 1073741824;
	return s.d;
}

int main(void) {
    printf("Valid access: %f\n", fun(1));      // Safe access
    printf("Invalid access: %f\n", fun(2));    // Prevented buffer overflow
    printf("Negative index: %f\n", fun(-1));   // Prevented buffer overflow

    return 0;
}
