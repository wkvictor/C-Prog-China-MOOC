#include <stdio.h>

int main(void)
{
    int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
    int *p = &a[5];
    
    printf("p = %p\n", p);
    printf("p[-2] = %d\n", p[-2]);
    printf("*(p-2) = %d\n", *(p-2));
    
    return 0;
}