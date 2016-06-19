#include<stdio.h>

int main(int argc, char** argv){
    
    int N;
    
    scanf("%i", &N);
    
    int s, p, z, n;
    
    for (s = 0; s < N; ++s) {
        
        for(p = N - s; p != 0; --p) {
            
            printf(" ");
            
            }
			
		z = s*2 +1;
		
		for(n = 1; n <= z; ++n) {
			
			printf("*");
            
            }
			
		printf("\n");
            
        }
        
    return 0;
}