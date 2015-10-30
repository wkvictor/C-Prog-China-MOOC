#include <stdio.h>


typedef struct {
    int month;
    int day;
    int year;
} Date;


int main()
{
    Date myday = {05,29,2015};
    
    printf("Today is %i-%i-%i\n", myday.month, myday.day, myday.year);
    
    
    return 0;
}