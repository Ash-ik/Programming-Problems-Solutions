#include<stdio.h>
int main()
{
    FILE *in,*out;
    char a,b;
    int counts=0,counts2=0;
     in=fopen("data1.txt","r");
    out=fopen("data2.txt","r");
    while(1)
    {
        counts++;
        a=fgetc(in);
        b=fgetc(out);
        if(a=='\n') counts=0,counts2++;
        if(a==EOF &&b==EOF) {printf("AC\n");break;}
        if(a!=b) {printf("WA= %c,(%d,%d)\n",a,counts2,counts);break;}
    }
    return 0;
}
