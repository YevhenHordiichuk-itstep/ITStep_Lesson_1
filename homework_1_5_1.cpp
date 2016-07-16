#include <stdio.h>

int main(int argc, char** argv) {
  int X[] = {};
  int Y[] = {};
  int N;
  
  printf("Enter N = ", N);
  scanf("%i", &N);
  
  int z;
  int scalar = 0;
  printf("Enter X[]:");
  for (int k = 0; k < N; ++k) {
    scanf("%i", &X[k]);
  }
  
  printf("Enter Y[]:");
  for (int k = 0; k < N; ++k) {
    scanf("%i", &Y[k]);
  }
  
  printf("Z = (");
  for (int n = 0; n < N; ++n){
    scalar += X[n] * Y[n];
    z = X[n] + Y[n];
    printf("%i, ", z);
  }
  
  printf("\b\b)");
  printf("\nscalar = %i", scalar);
  return 0;
}