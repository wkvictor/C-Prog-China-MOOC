#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	srand(time(0));
	int number = rand()%100 + 1;
	
	int a;
	int count = 0;
	
	do {
		printf("Please enter a number between 1 and 100: ");
		scanf("%d", &a);
		
		count += 1;
		
		if (a>number) {
			printf("Should guess smaller \n");
		} else if (a<number) {
			printf("Should guess larger \n");
		} else {
			printf("Congratulations! \n");
		}
	
	
	} while (a!=number);
	
	printf("You use %d times.\n", count);

	return 0;
	
}