#include <cstdio>

int main(int argc,char** argv) {
	
	int N = 331; 
	
	int d, n;
	
	int array[N];                    //почему массив длинной именно N? да потому что вывод точно не будет занимать < N значений 
	
	printf("N = %i:  vivod: 0x", N);
	
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
		
		printf("%d", array[n]); //вывод символов в ASCII, как исправить?
		
	}
	
	return 0;
}