#include <stdio.h>

int main(){
	
	int number, sum = 0, count = 0;
	
	printf("Please enter a number: ");
	scanf("%d", &number);
	
	while (number!=-1) {
		sum += number;
		count += 1;
		printf("Please enter a number: ");
		scanf("%d", &number);
	}
	
	printf("%f\n", 1.0*sum/count);
	
	return 0;
}