#include <stdio.h>

int main(void)
{
    int m, n;
//    printf("Please input a fraction in the format m/n: ");
    scanf("%d/%d", &m, &n);
    
    int minmn = n;
    if (m<n) {
        minmn = m;
    }
    
    int k, divisor;
    for (k=1; k<=minmn; k++) {
        if (m%k==0 && n%k==0) {
            divisor = k;
        }
    }
    
    m = m/divisor;
    n = n/divisor;
    
//    printf("The simplified fraction is: %d/%d\n", m, n);
    printf("%d/%d", m, n);
    
    return 0;
}