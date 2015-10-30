#include <stdio.h>

void sum(int begin, int end){
    
    int i, sum = 0;
    for ( i=begin; i<=end; i++){
        sum += i;
    }
    printf("The sum from beign to end is %d\n", sum);
}

int main(){
    
    sum(1,10);
    sum(20,30);
    sum(35,45);
    
    return 0;
}