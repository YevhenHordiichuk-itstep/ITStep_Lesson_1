#include <cstdio>
#include <cmath>
#include <limits.h>


int main(int argc, char** argv) {
	
	int x = 2;
	
	int y;
	
	int a = 0;
	
	for (y = 0; y < 32; ++y) {
		
		a += pow(x, y);
		
	
	}
	
	printf("int max = %i", INT_MAX);
	
	printf("\na = %i", (a - 1));
	
	printf("\nsizeof int = %i", sizeof(int));
	
	return 0;
}