#include <stdio.h>

int main(){
    
    const int AMOUNT = 100;
    int price = 0;
    
    printf("Please input amount (USD): ");
    scanf("%d", &price);
    
    int change = AMOUNT - price;
    
    printf("The change is %d USD \n", change);
    
    return 0;
    
}
