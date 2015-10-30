#include <stdio.h>
#include <string.h>

int mycmp(char const *s1, char const *s2)
{
    while ( *s1 == *s2 && *s1 != '\0' ) {
        s1 ++;
        s2 ++;
    }
    
    return *s1 - *s2;
}


int main(int argc, char const *argv[])
{
    char *s1 = "abcd";
    char *s2 = "ab";
    
    printf("mycmp(s1,s2) = %d \n", mycmp(s1,s2));
    printf("strcmp(s1,s2) = %d\n", strcmp(s1,s2));
    
    printf("'c' = %d\n", 'c');
    
    return 0;
}