#include <stdio.h>

int main(){
    
    int a, b, c;
    printf("Please input 3 numbers: ");
    scanf("%d %d %d", &a, &b ,&c);
    
    int maxval = 0;
    
    if (a>b) {
    	if (a>c)
    		maxval = a;
    	else
    		maxval = c;
    }
    else {
    	if (b>c)
    		maxval = b;
    	else 
    		maxval = c;
    }
    
    printf("Max value is %d\n", maxval);
    
    return 0;
}