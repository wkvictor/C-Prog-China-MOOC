#include <stdio.h>
#include <assert.h>

void swap5(int** a, int** b) {
    int* temp = *a;
    *a = *b;
    *b = temp;
    assert(**a == 17);
    assert(**b == 42);
    // they're swapped!
}

int main(void)
{
    int x = 42;
    int y = 17;
    int* xp = &x;
    int* yp = &y;
    
    printf("before swap: x=%d,y=%d\n",x,y);
    printf("before swap: *xp=%d,*yp=%d\n",*xp,*yp);
    printf("before swap: xp=0x%p,yp=0x%p\n",xp,yp);
    
    swap5(&xp, &yp);
    
    printf("after swap: x=%d,y=%d\n",x,y);
    printf("after swap: *xp=%d,*yp=%d\n",*xp,*yp);
    printf("after swap: xp=0x%p,yp=0x%p\n",xp,yp);
    
    assert(xp == &y);
    assert(yp == &x);
    assert(x == 42);
    assert(y == 17);

    return 0;
}