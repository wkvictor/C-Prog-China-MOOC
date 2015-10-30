#include <stdio.h>

int main(void)
{
    int num; 
    int i1 = scanf("%i",&num);
    int i2 = printf("%i\n",num);
    printf("%i:%i\n",i1,i2);

    return 0;
}
