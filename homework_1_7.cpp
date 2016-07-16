//из десятичного в двоичный

#include <stdio.h>

int main(int argc, char** argv) {
  int N = 30; 
  int k, n;
  k = N;
  int array[N];
  for (n = 0; N != 0; ++n) {
    array[n] = N % 2;
    N /= 2;
  }
  
  printf("N = %i:  vivod: ", k);
  while (n != 0) {
    --n;
    printf("%i", array[n]);
  }
  return 0;
}