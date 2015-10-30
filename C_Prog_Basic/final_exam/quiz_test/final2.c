#include <stdio.h>
#include <string.h>

//int fun(int x)
//{
//    return (x<3?1:(fun(x-1)+2*fun(x-2)));
//}
//
//int main()
//{
//    printf("%d",fun(4)+fun(5));
//}

//int main()
//{
////    char a[20]="cehiknqtw";
////    char *s="fbla",*p;
////    int i, j;
////    for(p=s; *p; p++) {
////        j=0;
////        while (*p>=a[j] && a[j]!='\0') j++;
////        for(i=strlen(a); i>=j; i--) a[i+1] = a[i];
////            a[j]=*p;
////            }
////    printf("%s\n", a);
//    
//    
////    char s[]="Zhejiang";
////    s[strlen(s)/2-1]=0;
////    printf("%lu#%s#\n",strlen(s),s);
//    
//    
//    
//
//    return 0;
//}



void f( int *pa, int *pb )
{
    int pt;
    pt = *pa, *pa = *pb, *pb = *pa;
}
int main(void)
{
    int x=1, y=2;
    f(&x, &y);
    printf("%d%d", x, y);
}