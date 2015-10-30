#include <stdio.h>

void f(int i)
{
    printf("in f(), %d\n", i);
}

void g(int i)
{
    printf("in g(), %d\n", i);
}

void h(int i)
{
    printf("in h(), %d\n", i);
}

void k(int i)
{
    printf("in k(), %d\n", i);
}

int main(void)
{
    int i = 0;
    void (*fptr[])(int) = {f, g, h, k};
    
    scanf("%d", &i);
    if (i>=0 && i<sizeof(fptr)/sizeof(fptr[0])) {
        (*fptr[i])(0);
    }
    
    return 0;
}