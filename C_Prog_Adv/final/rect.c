#include <stdio.h>

int max(int a[], int len)
{
	int maxid = 0;
	int i;
	for(i=1; i<len; i++)
	{
		if(a[i]>a[maxid])
		{
			maxid = i;
		}
	}
	return a[maxid];
}


int min(int a[], int len)
{
	int maxid = 0;
	int i;
	for(i=1; i<len; i++)
	{
		if(a[i]<a[maxid])
		{
			maxid = i;
		}
	}
	return a[maxid];
}



int main()
{
	int numpts;
	scanf("%d",&numpts);

	int x[numpts], y[numpts];
	
	int i;
	for (i=0; i<numpts; i++)
	{
		scanf("%d", &x[i]);
		scanf("%d", &y[i]);
	}

	// for (i=0; i<numpts; i++)
	// 	printf("%d %d ", x[i], y[i] );

	int x_max = max(x, numpts);
	int y_max = max(y, numpts);

	int x_min = min(x, numpts);
	int y_min = min(y, numpts);

	printf("%d %d %d %d\n", x_min, y_min, x_max, y_max);

	return 0;
}