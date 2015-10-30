#include <stdio.h>

int search(int key, int a[], int len)
{
    int ret = -1;
    int i;
    for (i=0; i<len; i++)
    {
    	if (key==a[i])
    	{
    		ret = i;
    		break;
    	}
    }

	return ret;
}

int main()
{
	int a[] = {1,3,2,4,1,3,5,12,982,21,43};
	int r = search(12, a, sizeof(a)/sizeof(a[0]) );

	printf("12 is at position %d\n", r);

	return 0;
}