#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[] = {'H','e','l','l','o','\0'};
    word[0] = 'B';
    printf("%s\n", word);
    
    // bus error
//    char *str = "Hello";
//    str[0] = 'B';
//    printf("str=%s", str);
    
    return 0;
}