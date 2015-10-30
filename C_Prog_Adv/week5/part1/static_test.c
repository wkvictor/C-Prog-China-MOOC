#include <stdio.h>

int f(void);

int gAll=12;   // default value of a global variable is 0

int main()
{
    
    f();
//    f();
//    f();
    
    return 0;
}


int f(void)
{
//    int all = 1;
    static int all = 1;   // static local variable
    int k = 0;    // local variable
    
    printf("&gAll=%p\n", &gAll);
    printf("&all =%p\n", &all);
    printf("&k   =%p\n", &k);
    
    printf("in %s all=%d\n", __func__, all);
    all += 2;
    printf("again in %s all=%d\n", __func__, all);
    
    return all;
    
}