#include <stdio.h>

const int size = 3;

int check_row(int board[][size], int size);
int check_col(int board[][size], int size);
int check_diag(int board[][size], int size);
int check_anti(int board[][size], int size);   // anti-diagonal


int main(void)
{
    int board[size][size];
    int i,j;
    int numX, numO;
    int result = -1;  // -1: no one wins; 1: X wins; 0: O wins.
    
    // read in matrix
    for (i=0; i<size; i++) {
        for (j=0; j<size; j++) {
            printf("Input board[%d][%d]: ", i, j);
            scanf("%d", &board[i][j]);
        }
    }
    
    int k = 0;
    while ( k < 4 ) {
        
        if (k==0) {
            result = check_row(board, size);
        } else if (k==1) {
            result = check_col(board, size);
        } else if (k==2) {
            result = check_diag(board, size);
        } else {
            result = check_anti(board, size);
        }
        
        if (result == 1) {
            printf("X wins!\n");
            break;
        } else if (result == 0) {
            printf("O wins!\n");
            break;
        } else if (result== -1 && k==3 ){
            printf("No one wins ... \n");
        }
        
        k ++;
            
    }
    
    
    
    return 0;
}




int check_row(int board[][size], int size)
{
    int i, j ,result;
    
    for (i=0; i<size; i++) {
        int numX = 0, numO = 0;
        
        for (j=0; j<size; j++) {
            if (board[i][j] == 1) {
                numX ++;
            } else {
                numO ++;
            }
        
        }
        if (numX==size) {
            result = 1;
        } else if (numO==size) {
            result = 0;
        } else {
            result = -1;
        }
    }
    
    return result;
}




int check_col(int board[][size], int size)
{
    int i, j, result;
    
    for (j=0; j<size; j++) {
        int numX = 0, numO = 0;
        
        for (i=0; i<size; i++) {
            if (board[i][j] == 1) {
                numX ++;
            } else {
                numO ++;
            }
            
        }
        if (numX==size) {
            result = 1;
        } else if (numO==size) {
            result = 0;
        } else {
            result = -1;
        }
    }
    
    return result;
}



int check_diag(int board[][size], int size)
{
    int i, result;
    int numX = 0, numO = 0;
    for (i=0; i<size; i++) {
        if (board[i][i]==1) {
            numX ++;
        } else {
            numO ++;
        }
    }
    
    if (numX==size) {
        result = 1;
    } else if (numO==size) {
        result = 0;
    } else {
        result = -1;
    }
    
    return result;
}



int check_anti(int board[][size], int size)
{
    int i, result;
    int numX = 0, numO = 0;
    for (i=0; i<size; i++) {
        if (board[i][size-i-1]==1) {
            numX ++;
        } else {
            numO ++;
        }
    }
    
    if (numX==size) {
        result = 1;
    } else if (numO==size) {
        result = 0;
    } else {
        result = -1;
    }
    
    return result;
}













