#include <stdio.h>

int max(int a, int b)
{
    int ret;
    if (a>b) {
        ret = a;
    } else {
        ret = b;
    }
    
    return ret;
}


int main()
{
    int a, b;
    
    printf("Please input two numbers: ");
    scanf("%d %d", &a, &b);
    
    printf("The max of %d and %d is %d\n", a, b, max(a,b));
    
    return 0;
}