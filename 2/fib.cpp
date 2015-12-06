#include <stdio.h>
#include <math.h>

double phi_plus = (1 + sqrt(5)) / 2;
double phi_minus = (1 - sqrt(5)) / 2;
long ComputeFibNumber(const long n) {
  return floor((pow(phi_plus, n) - pow(phi_minus, n)) / sqrt(5));
}

int main(int argc, char const *argv[]) {
  long max_val = 4000000;
  long sum = 0;
  bool all_were_smaller = true;
  long i = 3;
  while (all_were_smaller) {
    long number = ComputeFibNumber(i);
    i += 3;
    fprintf(stderr, "fib num = %d\n", number);
    if (number < max_val) {
      sum += number;
    } else {
      break;
    }
  }
  fprintf(stderr, "fib num sum = %d\n", sum);

  return 0;
}
