#include <stdio.h>

int main(){
	
	int price = 0;
	int bill = 0;
	
	printf("please input price: ");
	scanf("%d", &price);
	
	printf("please input bill: ");
	scanf("%d", &bill);
	
	if (bill >= price) {
		printf("change is %d\n", bill-price);
	} 
	else {
		printf("Not enough bill! \n");
		}
		
	return 0;


}