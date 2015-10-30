#include <stdio.h>

int main(void)
{
    FILE *fp = fopen("my.out","r");
    if (fp){
        int num;
        fscanf(fp, "%i", &num);
        printf("%d\n", num);
        fclose(fp);
    } else {
        printf("Cannot open file\n");
    }   

    return 0;
}
