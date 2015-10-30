#include <stdio.h>

int main()
{
	int a1,b1,a2,b2;
	scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);

	int num1 = a1 * b2;
	int num2 = a2 * b1;

	if (num1 > num2)
		printf("%d/%d > %d/%d", a1,b1,a2,b2);
	else if (num1 < num2)
		printf("%d/%d < %d/%d", a1,b1,a2,b2);
	else
		printf("%d/%d = %d/%d", a1,b1,a2,b2);

	return 0;
}