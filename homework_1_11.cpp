#include <cstdio>

int main(int argc, char** argv) {
	
	int year;
	
	printf("enter year: ");
	scanf("%i", &year);
	
	if ((year % 4) == 0 || ((year % 400) == 0 && (year % 100) != 0)) {
		
		printf("yes");
		
	} else {
		
		printf("no");
		
	}
	
	return 0;
}