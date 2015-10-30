#include <stdio.h>

int main(void)
{
    double tt = (double)(10/4*4);
    printf("%f\n", tt);
    
    int i,x,y;
    i=x=y=0;
    do {
        ++i;
        if ( i%2 )
            x+=i,
            i++;
            y +=i++;
            } while ( i<=7 );
    printf("%d %d %d\n", i, x, y);

}