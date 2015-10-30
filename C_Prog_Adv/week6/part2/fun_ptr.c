#include <stdio.h>

void f()
{
	printf("int f()\n");
}


int main(void)
{
	int i = 0;
	int *p = &i;
	int a[] = {1,2};
	
	void (*pf)(void) = f;  // this is a function pointer
	
	f();
	(*pf)();
		
	printf("%p\n", main);
	printf("%p\n", pf);
	printf("%p\n", a);
	
	return 0;
}
