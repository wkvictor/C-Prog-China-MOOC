#include <stdio.h>

int main(void)
{
    const int maxsize = 10000;
    int str[maxsize], c;
    int cnt[10] = {0};

    int count = 0;
    int k = 0;
    int start = k;
    int length;
    int pre;
    
    while ( (c=getchar()!=EOF) ) {
        str[k] = c;
        pre = str[k-1];
        
        if ( (c==32 || c==9 || c==13 || c==44 || c==46 || c==63 || c==40 || c==41 || c==34 || c==58) && !(pre==32 || pre==9 || pre==13 || pre==44 || pre==46 || pre==63 || pre==40 || pre==41 || pre==34 || pre==58)) {
            count ++;
            length = k - start;
            
            if (length <= 10) {
                cnt[length-1] ++ ;
            }
            
            start = k+2;
        }
        
        k++;
    }
    
    printf("%d " , count);
    
    for (k=0; k<10; k++) {
        printf("%d ", cnt[k]);
    }
    
    
    
    return 0;
}