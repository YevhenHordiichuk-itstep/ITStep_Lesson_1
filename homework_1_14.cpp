#include <iostream>

void bubblesort(int A[], int B[], int N){
  for (int i = 0; i < N; ++i) {
    B[i] = A[i];
  }
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N - 1 - i; ++j) {
      if (B[j] > B[j + 1]) {
        int b = B[j];
        B[j] = B[j + 1];
        B[j + 1] = b;
      }
    }
  }
  std::cout << "dest ="; 
  for (int i = 0; i < N; ++i) {
  std::cout << " " << B[i];
}
}

int main(int argc, char** argv) {
  int source[] = {1, 6, -8, 2, 0, 11, -4, 5};
  int N = 8;
  int dest[N];
  bubblesort(source, dest, N);
  return 0;
}