#include <stdio.h>

int main(int argc, char** argv) {
  int x;
  int y;
  scanf("%i", &x);
  if (x <= 999) {
    printf("This program is for four-valued numbers only");
  } else if (x > 9999) {
    printf("Please, enter four-valued number");
  } else {
    y = (x % 10) * 1000 + ((x / 10) % 10) * 100 + ((x / 100) % 10) * 10 + ((x / 1000));
    printf("Your number back to front:%i", y);
  }
return 0;
}