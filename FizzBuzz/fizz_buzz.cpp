#include <stdio.h>

int main(int argc, char const *argv[]) {
  int sum = 0;
  for (int i = 0; i < 1000; ++i) {
    sum += (i % 3 == 0 || i % 5 == 0) ? i : 0;
  }
  fprintf(stderr, "summ = %d\n", sum);
  return 0;
}
