#include <stdio.h>

int main()
{
    int a;
    scanf("%d", &a);
    
    int h = a/100;
    int t = a/10 - 10*h;
    int d = a%10;
    
    int b = 100*d + 10*t + h;
    
    printf("%d\n", b);
    
    return 0;

}