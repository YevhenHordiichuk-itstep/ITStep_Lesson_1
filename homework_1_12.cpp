//НОД двух чисел

#include <iostream>

int main(int argc, char** argv) {
  int a, b;
  int nod = 1;
  int amass[20];
  int bmass[20];
  std::cout << "a = ";
  std::cin >> a;
  std::cout << "b = ";
  std::cin >> b;
  int n = 0;
  int c = 0;
  if (a > b) {
    for (int i = 2; i <= a; ++i) {
      if (a % i == 0 && a != 1) {
        amass[n] = i;
        ++n;
        a /= i;
        i = 2;
      }
      if (b % i == 0 && b != 1) {
        bmass[c] = i;
        ++c;
        b /= i;
        i = 2;
      }
    }
  } else {
    for (int i = 2; i <= b; ++i) {
      if (a % i == 0 && a != 1) {
        amass[n] = i;
        ++n;
        a /= i;
        i = 2;
      }
      if (b % i == 0 && b != 1) {
        bmass[c] = i;
        ++c;
        b /= i;
        i = 2;
      }
    }
  }
  if (n <= c) {
    for (int i = 0; i < n; ++i) {
      for (int u = 0; u < c; ++u) {
        if (amass[i] == bmass[u]) {
          amass[i] = bmass[u];
          u = c;
        }
      }
    }
    for (int k = 0; k < i; ++k) {
      nod *=amass[k];
    }
  } else {
    for (int i = 0; i < c; ++i) {
      for (int u = 0; u < n; ++u) {
        if (bmass[i] == amass[u]) {
          bmass[i] = amass[u];
          u = c;
        }
      }
    }
    for (int k = 0; k < i; ++k) {
      nod *=amass[k];
    }
  }
  std::cout << nod;
  return 0;
 }
