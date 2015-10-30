#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* mycpy(char *dst, const char *src)
{
    int idx = 0;
    
    while (src[idx]!='\0') {
        dst[idx] = src[idx];
        idx ++;
    }
    dst[idx] = '\0';
    
    return dst;
}


int main(int argc, char const *argv[])
{
    
    char *src = "Hello";
    char *dst = (char*)malloc(strlen(src)+1);
    
    printf("%p:\t %s\n", src, src);
    printf("%p:\t %s\n", dst, mycpy(dst,src));
    
    printf("%p:\t %s\n", src, src);
    printf("%p:\t %s\n", dst, strcpy(dst,src));
    
    free(dst);
    
    
    return 0;
}