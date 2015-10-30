#include <stdio.h>

int main()
{

	char s[2][3]={"ab", "cd"}, *p=(char *)s;
	printf("%c\n",s[1][1]);
	printf("%c\n",*++p+2);

	


	return 0;
}