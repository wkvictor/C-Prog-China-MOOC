#include <stdio.h>

int main(void)
{
    int size = 4;
    int a[4][4] = { {1, 7, 4, 1} ,
                    {4, 8, 3, 6},
                    {1, 6, 1, 2},
                    {0, 7, 8, 9}
    };
    
    int i = 0, j = 0, k = 0;
    int tmp, tmpi, tmpj;
    int flag = 0;
    
    for (i=0; i<size; i++) {
        
        tmp = a[i][0];
        tmpj = 0;
        
        for (j=0; j<size; j++) {
            if (a[i][j] > tmp) {
                tmpj = j;    // at i-th row, max index
                tmp = a[i][j];
            }
        }
        
        for (k=0; k!=i && k<size; k++) {
            if (a[k][tmpj] < a[i][tmpj]) {
                break;
            } else {
                tmpi = i;
                flag = 1;
                goto summary;
            }
        }
        
//        printf("i,j = %d, %d\n", i, j);
        
    }
    
summary:
    if (flag) {
        printf("saddle point is at (%d,%d).\n", tmpi, tmpj);
    } else {
        printf("No saddle point found.\n");
    }
    
    
    return 0;
}