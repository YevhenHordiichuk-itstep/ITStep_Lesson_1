#include <cstdio>

int main(int argc,char** argv) {
	
	int N = 2016;
	
	int d, n;
	
	int array[100];
	
	printf("N = %i:\tvivod: 0x", N);
	
	for (n = 0; N != 0; ++n) {
		
		d = N % 16;
		
		if (d == 10) {
			
			array[n] = 'A';
			
		} else if (d == 11) {
			
			array[n] = 'B';
			
		} else if (d == 12) {
			
			array[n] = 'C';
			
		} else if (d == 13) {
			
			array[n] = 'D';
			
		} else if (d == 14) {
			
			array[n] = 'E';
			
		} else if (d == 15) {
			
			array[n] = 'F';
			
		} else {
			
			array[n] = d;
			
		}
		
		N = N / 16;
	}
	
	while (n != 0) {
		
		--n;
		
		if (array[n] == 65){
			
			printf("A");
			
		} else if (array[n] == 66){
			
			printf("B");
			
		} else if (array[n] == 67){
			
			printf("C");
			
		} else if (array[n] == 68){
			
			printf("D");
			
		} else if (array[n] == 69){
			
			printf("E");
			
		} else if (array[n] == 70){
			
			printf("F");
			
		} else {
			
			printf("%i", array[n]);
			
		}
		
	}
	
	return 0;
}