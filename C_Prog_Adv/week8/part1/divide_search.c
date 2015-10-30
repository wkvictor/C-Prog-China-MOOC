#include <stdio.h>

int search(int k, int a[], int len)
{
    int ret = -1;
   
    int left = 0;
    int right = len-1;

    while(left < right)
    {
        int mid = (left+right)/2;

        if (a[mid] == k)
        {
            ret = mid;
            break;

        } else if (a[mid]>k)
        {
            right = mid - 1;
        } else
        {
            left = mid + 1;
        }
    }

	return ret;
}

int main()
{
	int a[] = {1,3,12,31,38,41,91,102,201};   // sorted array
	int r = search(12, a, sizeof(a)/sizeof(a[0]) );

	printf("12 is at position %d\n", r);

	return 0;
}