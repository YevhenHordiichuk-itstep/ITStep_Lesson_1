#include <stdio.h>

int main(int argc, char** argv) {
  int X[] = {1, 2, 3, 4, 5};
  int Y[] = {6, 7, 8, 9, 10};
  int N;
  
  printf("Enter N = ");
  scanf("%i", &N);
  
  int scalar = 0;
  int z;
  
  printf("Z = (");
  
  for(int n = 0; n < N; ++n){
    scalar += X[n] * Y[n];
    z = X[n] + Y[n];
    printf("%i, ", Z);
  }
  printf("\b\b)\nscalar = %i", scalar);
  return 0;
}