#include <iostream>
#include <cmath>

// sin(30) = 0.5

double mod(double a) {
	if (a < 0) {
		
		a = 0 - a;
		
		return a;
	} else {
		
		return a;
	}
	
}



int main(int argc, char** argv) {
	
	double x, sin, e;
	
	int n, factorial;
	
	e = 0.001;
	
	x = 30.00;
	
	
	
	for (n = 0; (sin - 0.5) < e; ++n) {
		
		for (int i = 0; i < n; ++i) {
			
			for (int k = 1; k <= (2 * i + 1); ++k) {
				
				if (k == 1) {
					
					factorial = 1;
					
					}
					
				factorial *= k;
					
			}
					
		sin += pow(x, 2 * i + 1) * pow(-1.0, i) / factorial;
		
		std::cout << sin << "\n";
		
		}
		
		sin = mod(sin);
		
		std::cout << sin << "\n";
		
	}

	std::cout << "n = " << n << "\n";	// ?? правильно ли решение ??
	
	std::cout << "sin = " << sin;       // ?? 
	
	return 0;
}