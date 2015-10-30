#include <stdio.h>

int main(void)
{

    int x=0, y=0, z=0;
    z = (x==1) && (y=2);
    printf("%d ", y);
    
    
    int i=10;
    long long t = sizeof(i++);
    printf("%d", i);


}