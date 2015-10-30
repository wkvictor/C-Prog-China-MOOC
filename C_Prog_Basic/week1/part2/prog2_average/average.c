#include <stdio.h>

int main(){
    
    int a, b;
    
    printf("Please input two integers: ");
    scanf("%d %d", &a, &b);
    
    double c = (a+b)/2.0;

    printf("The average is %f\n", c);



}