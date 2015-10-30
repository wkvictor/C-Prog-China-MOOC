#include <stdio.h>

int f(void);

int gAll;   // default value of a global variable is 0

int main()
{
    printf("in %s gAll=%d\n", __func__, gAll);
    f();
    printf("again in %s gAll=%d\n", __func__, gAll);
    
    return 0;
}


int f(void)
{
    int gAll = 1;
    printf("in %s gAll=%d\n", __func__, gAll);
    gAll += 2;
    printf("again in %s gAll=%d\n", __func__, gAll);
    
    return gAll;
    
}