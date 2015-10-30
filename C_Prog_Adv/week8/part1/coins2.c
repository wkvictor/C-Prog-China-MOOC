#include <stdio.h>

// int amount[] = {1,5,10,25,50};
// char *name[] = {"penny","nickel","dime","quarter","half-dollar"};

typedef struct
{
    int amount;
    char *name;
} coins;

coins pairs[] = {
    {1,"penny"},
    {5,"nickel"},
    {10,"dime"},
    {25,"quarter"}
};


int main()
{
	int k = 10;
    int ret = -1;
	
    for (int i=0; i<sizeof(pairs)/sizeof(pairs[0]); i++)
    {
        if (k == pairs[i].amount)
        {
            printf("%s\n", pairs[i].name);
            ret = i;
            break;
        }

    }

    if (ret == -1)
    {
        printf("Nothing found.\n");
    }


	

	return 0;
}