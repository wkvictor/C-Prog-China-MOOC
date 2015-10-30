#include <stdio.h>
#include <string.h>

#define DF(a,b)  (a+2*b) 

#define  F1(var)  printf("var=%d", var)
#define  F0(var)  F1(var * var)

int main()
{
	// printf("%d\n",(int)!!"2010-01-27");

	// int s=5;
	// int k= DF(s+1,s-3);
	// printf("%d\n",k);

	// int a[3][6];
	// printf("%d\n",sizeof(int));
	// printf("%d\n",sizeof(a[0]));

	// int a = 6, b = 0, c = 3;
	// printf("%d\n",a && b || b - c);

// 	char a[20]="cehiknqtw";
// char *s="fbla",*p;
// int i, j;
// for(p=s; *p; p++) {
//    j=0;
//    while (*p>=a[j] && a[j]!='\0') j++;
//    for(i=strlen(a); i>=j; i--) a[i+1] = a[i];
//    a[j]=*p;
// }
// printf("%s\n", a);

	F0(3+4);

	

	return 0;
}