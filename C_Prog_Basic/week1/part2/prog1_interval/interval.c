#include <stdio.h>

int main(){
	
	int hour1, minute1;
	int hour2, minute2;
	
	printf("Please input the 1st time instance (hour,minute): ");
	scanf("%d %d", &hour1, &minute1);

    printf("Please input the 2nd time instance (hour,minute): ");
    scanf("%d %d", &hour2, &minute2);
    
    int t1 = 60*hour1 + minute1;
    int t2 = 60*hour2 + minute2;
    
    printf("Time lag is %d hrs %d mins \n", (t2-t1)/60, (t2-t1)%60 );
    
    return 0;
    
}