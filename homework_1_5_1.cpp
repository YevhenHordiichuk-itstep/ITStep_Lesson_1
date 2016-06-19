#include <stdio.h>

int main(int argc, char** argv) {
	
	int X[] = {};
	int Y[] = {};
	
	int N;
	
	printf("Enter N = ", N);
	scanf("%i", &N);
	
	int Z;
	
	int scalar = 0;
	
	for(int m = 0; m < N; ++m) { //Попытка определить статический массив, прога компится вроде 
		
		printf("X[%i] = ", m);
		
		scanf("%i", &X[m]);
		
	}
	
	for(int k = 0; k < N; ++k) {
		
		printf("Y[%i] = ", k);
		
		scanf("%i", &Y[k]);

    }
	
	printf("Z = (");
	
	for(int n = 0; n < N; ++n){
		
		scalar += X[n] * Y[n];
		
		Z = X[n] + Y[n];
		
		printf("%i, ", Z);
	}
	
	printf("\b\b)");
	
	printf("\nscalar = %i", scalar);
	
	return 0;
}