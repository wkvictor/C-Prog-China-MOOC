#include <stdio.h>

//void funa(int *x, int *y);

int main(int argc, const char *argv[])
{
//    int x = 8, y = 9;
//    
//    printf("x=%d,y=%d\n", x,y);
//    
//    funa(&x, &y);
//    
//    printf("x=%d,y=%d\n", x,y);
//    
//    char ch = -1;
//    printf("%hhd\n", ch);
    
    int a[3][6];
    
    printf("sizeof(int)=%lu\n",sizeof(int));
    
    printf("sizeof(a[0])=%lu\n",sizeof(a[0]));
    
    return 0;
}


//void funa(int *x , int *y)
//{
//    int *p;
//    p=x;x=y;y=p;
//}