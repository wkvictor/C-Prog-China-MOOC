#include <stdio.h>

int main(){
    
    double a;
    
    printf("Please input a number in double: ");
    scanf("%lf", &a);
    printf("coerce %f to %d\n", a, (int)a);

    
    return 0;
}