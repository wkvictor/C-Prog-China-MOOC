#include <stdio.h>

void WriteStr(char *fn,char *str)
{
    FILE *fp;
    fp=fopen(fn,"w");
    fprintf(fp, "%s", str);
    fclose(fp);
}

int main()
{
    WriteStr("t1.dat","start");
    WriteStr("t1.dat","end");
    return 0;
}