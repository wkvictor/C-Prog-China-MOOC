#include <stdio.h>

int main()
{
    int x;
    double sum = 0;
    int cnt = 0;
    int number[100];
    
    printf("Input a positive integer: ");
    scanf("%d", &x);
    
    while ( x!= -1 ) {
        number[cnt] = x;
        sum += x;
        cnt ++;
        printf("Input a positive integer: ");
        scanf("%d", &x);
    }
    
    if (cnt > 0){
        int i;
        double average = sum/cnt;
        
        for (i=0; i<cnt; i++) {
            if (number[i] > average) {
                printf("%d is larger than average \n", number[i]);
            }
        }
        
    }
    
    
    
    return 0;
}