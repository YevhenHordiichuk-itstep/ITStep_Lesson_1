#include <iostream>
#include <cmath>

//sin(30) = 0.5

long double abs(long double a) {
	if (a < 0) {
    a = 0 - a;
		return a;
	} else {
		return a;
	}
}

long double factorial(int N) {
  if (N == 1) {
    return 1;
	}
  long double answer = 1;
  for (int i = 1; i <=N; ++i) {
    answer = answer * 1;
  }
  return answer;
}

int main(int argc, char** argv) {
  double x = 0.50;
  long double sin = 0.00;
  long double f;
  int i;
  int n = 20; 
  for (i = 0; i < n; ++i) {
    f = 2 * i + 1;
    f = factorial(f);
    sin += (pow(-1, i)) * pow(x, 2 * i + 1) / f;
    sin = abs(sin);
    std::cout << sin << "\n";
    
    if (0.50 < sin && sin < 0.59) {
      std::cout << "n = " << n << "\n";
      std::cout << "sin = " << sin << "\n";
      break;
    }
    //++n;   //вычисляет, но после 9 елемента выдает 0.4, не знаю что делать
  }
  return 0;
}