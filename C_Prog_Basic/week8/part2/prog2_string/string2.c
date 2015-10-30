#include <stdio.h>

int main(void)
{
    char string[8];
    
    scanf("%7s", string);    // use 7 before s to limit the input length
    printf("%s\n", string);
    
    return 0;
}