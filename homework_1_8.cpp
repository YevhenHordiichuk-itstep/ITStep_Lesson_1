#include <cstdio>

int idenHex(int letter){
  switch(letter){
    case 10:
      return 'A';
      break;
    case 11:
      return 'B';
      break;
    case 12:
      return 'C';
      break;
    case 13:
      return 'D';
      break;
    case 14:
      return 'E';
      break;
    case 15:
      return 'F';
      break;
    default:
      return letter;
      break;
  }
}

void prinHex(int letter_va) {
  switch(letter_va) {
    case 65:
      printf("A");
      break;
    case 66:
      printf("B");
      break;
    case 67:
      printf("C");
      break;
    case 68:
      printf("D");
      break;
    case 69:
      printf("E");
      break;
    case 70:
      printf("F");
      break;
    default:
      printf("%i", letter_va);
      break;  
  }
}

int main(int argc,char** argv) {
  int N = 2016;
  int d, n, va;
  int array[100];
  printf("N = %i:\tvivod: 0x", N);
  
  for (n = 0; N != 0; ++n) {
    d = N % 16;
    array[n] = idenHex(d);
    N /= 16;
    }
  
  while (n != 0) {
    --n;
    va = array[n];
    prinHex(va);
  }
  return 0;
}