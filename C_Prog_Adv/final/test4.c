#include <stdio.h>

int main()
{
	int k, a[10], *p=a;
	p++;
	a++;
	p[0] = k;
	a[0] = k;

	return 0;
}