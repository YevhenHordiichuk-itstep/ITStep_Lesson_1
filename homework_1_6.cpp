#include <cstdio>
#include <cmath>

int main(int argc, char** argv) {
    
    int N, n, m;
    
	printf("N = ", N);
    scanf("%i", &N);
	
    int X[N];
	int Y[N];
	
	float a = 0;
    
    int e = 0;

	for (n = 0; n < N; n++) {
		
		printf("X[%i] = ", n);
		scanf("%i", &X[n]);
		
	}
	
	for (m = 0; m < N; m++) {
		
		printf("Y[%i] = ", m);
		scanf("%i", &Y[m]);
		
	}
    
    while (e < N) {
        
        a += (X[e] - Y[e]) * (X[e] - Y[e]);
        
        ++e;
    }
	
    printf("a = %0.2f", sqrt(a));
    
    return 0;
}