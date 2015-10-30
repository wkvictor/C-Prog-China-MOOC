#include <stdio.h>

int main()
{
    const int num = 10;
    int x, count[num];
    int i;
    
    for (i=0; i<num; i++) {
        count[i] = 0;
    }
    
    scanf("%d", &x);
    
    while (x!=-1) {
        if (x>=0 && x<=9) {
            count[x]++;
        }
        scanf("%d", &x);
    }
    
    for (i=0; i<num; i++) {
        printf("%d:%d\n", i, count[i]);
    }
    
    return 0;
}