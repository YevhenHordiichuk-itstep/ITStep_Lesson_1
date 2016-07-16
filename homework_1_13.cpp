#include <iostream>

using namespace std;

void day_of_week(int day, int mounth, int year){
  int a, y, m, dow;
  a = (14 - mounth) / 12;
  y = year - a;
  m = mounth + 12 * a - 2;
  dow = (7000 + (day + y + y / 4 - y / 100 + y / 400 + (31 * m) / 12)) % 7;
  switch (dow) {
    case 0:
      cout << "sunday";
      break;
    case 1:
      cout << "monday";
      break;
    case 2:
      cout << "tuesday";
      break;
    case 3:
      cout << "wednesday";
      break;
    case 4:
      cout << "thursday";
      break;
    case 5:
      cout << "friday";
      break;
    case 6:
      cout << "saturday";
      break;
  }
}

int main(int argc, char** argv){
  int day = 24;
  int mounth = 11;
  int year = 2015;
  day_of_week(day, mounth, year);
  return 0;
}