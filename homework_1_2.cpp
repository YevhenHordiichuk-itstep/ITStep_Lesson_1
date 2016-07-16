#include <cstdio>

int main(int argc, char** argv)  {
  int n = 0;
  int i = 0;
  int A[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int с;
  while (i < 9) {
    for (n = 0; n < 9; ++n) {
      C = A[i] * B[n];
      printf("%d %d %d\n", A[i], B[n], C);
    }
    ++i;
  } 
  return 0;
}