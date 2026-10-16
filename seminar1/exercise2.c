#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

void print_int_to_binary(long long n, int bit_width) {
  for (int i = bit_width - 1; i >= 0; i--) {
    long long bit = (n >> i) & 1;
    printf("%lld", bit);
    if (i % 4 == 0 && i != 0)
      printf(" ");
  }
}

void print_fraction_to_binary(double fraction, int precision) {
  if (fraction <= 0.0)
    return;

  printf(".");
  for (int i = 0; i < precision; i++) {
    fraction *= 2.0;
    int bit = (int)fraction;
    printf("%d", bit);
    fraction -= bit;

    if (fraction == 0.0)
      break;
  }
}

void decimal_to_binary(double num, int precision) {
  long long int_part = (long long)num;
  double frac_part = num - int_part;

  if (frac_part < 0) {
    frac_part = -frac_part;
  }
  printf("Decimal: %g\n", num);
  printf("Binary : ");

  print_int_to_binary(int_part, 32);
  print_fraction_to_binary(frac_part, precision);
  printf("\n\n");
}

int main(void) {
  decimal_to_binary(13.625, 10);
  decimal_to_binary(-13.625, 10);
  decimal_to_binary(0.1, 12);
  decimal_to_binary(-42, 10);

  return 0;
}
