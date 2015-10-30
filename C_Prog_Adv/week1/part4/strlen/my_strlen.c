#include <stdio.h>
#include <string.h>

size_t mylen(const char *s)
{
    int cnt = 0;
    while (s[cnt] != '\0') {
        cnt ++ ;
    }
    return cnt;
}

int main(int argc, const char *argv[])
{
    char line[] = "Hello";
    printf("mylen=%lu\n", mylen(line));
    printf("strlen=%lu\n", strlen(line));
    printf("sizeof=%lu\n", sizeof(line));
    
    return 0;
}
