#include <stdio.h>

#define cube(x) ((x)*(x)*(x))  // Notice the parenthesis

int main(void)
{
    int i=0;
//    int s = i++;
//    printf("%d\n\n", s);
    scanf("%d", &i);
    printf("%d\n", cube(i));
    return 0;
}