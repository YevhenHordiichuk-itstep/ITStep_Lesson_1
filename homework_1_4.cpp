#include <cstdio>

int main(int argc, char** argv) {
    
    int a, N;
    
    printf("a = ", a);
    scanf("%i", &a);
    
    printf("v stepeni N = ", N);
    scanf("%i", & N);
    
    int x = 1;
    
    for(int n = 1; n <= N; ++n) { 
        
        x *= a;
            
        }
    
    printf("%i", x);
    
    return 0;
}