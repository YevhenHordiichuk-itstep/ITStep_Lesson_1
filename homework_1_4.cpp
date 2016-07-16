//быстрое возведение в степень

#include <cstdio>

void expo(int a, int N) {
  int result = 1;
  while (N > 0) {
    if (N % 2 == 1) {
      result *= a;
    }
  a *= a;
  N /= 2;
  }
  printf("%i", result);
}

int main(int argc, char** argv) {
  int a, N;
  printf("a = ", a);
  scanf("%i", &a);
  printf("Exponentiation N = ", N);
  scanf("%i", &N);
  expo(a, N);
  return 0;
}