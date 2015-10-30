#include <stdio.h>


struct date{
    int month;
    int day;
    int year;
};


int main(void)
{
    struct date today;
    
    today.month = 05;
    today.day = 28;
    today.year = 2015;
    
    printf("Today is %i-%i-%i\n",
           today.year, today.month, today.day);
    
    struct date now = {05, 29, 2015};
    
    printf("Today is %i-%i-%i\n",
           now.year, now.month, now.day);
    
    return 0;
}