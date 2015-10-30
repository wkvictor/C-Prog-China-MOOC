#include <stdio.h>

int main(){
    
    printf("Please input height (foot inch):");
    
    float a, b;
    
    scanf("%f %f", &a ,&b);
    
    float h = (a + b/12) * 0.3048;
    
    printf("Height in metric is %f \n", h);
    
    return 0;

}