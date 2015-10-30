#include <stdio.h>
#include <string.h>

int main(void)
{
    int Maxsize = 100;
    char str[Maxsize];
    
    printf("Please input a sentence ending with . \n");
    fgets(str, Maxsize, stdin);
    
    printf("%s\n", str);
    
    int k = 0;
    int len = 0;
    
    while ( 1 ) {
        
        
        if (str[k] == ' ') {
            printf("%d ", len);
            len = 0;
            k ++;
        }
        
        if (str[k] == '.') {
            printf("%d\n", len);
            break;
        }
        
        k ++;
        len ++;
        
    }
    
    return 0;
}