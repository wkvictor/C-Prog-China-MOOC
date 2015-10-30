#include <stdio.h>

int main(){
	
	int a;
	int n=0;
	
	printf("Please input a non-negative integer: ");
	scanf("%d", &a);
	
	do {
		a /= 10;
		n++;
	
	} while (a>0);
	
	printf("Number of digits is %d\n", n);

	return 0;
}