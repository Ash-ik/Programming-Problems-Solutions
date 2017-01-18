#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int compare( const void *a,const void *b)
{
    return (*(char*)a- *(char*)b);
}
int main()
{
    char a[10000];
    unsigned long long x,p,q,c,i,j;
    while(scanf("%s",a)==1)
{
    char b[10000]="";
    c=0;
    x=strlen(a);
    qsort(a,x,sizeof(char),compare);
        for(i=0;i<x;i++)
        b[x-i-1]=a[i];
            i=0;
        while(a[i]=='0')
            i++;
        a[0]=a[i];
        if(i)
            a[i]='0';
    p=0;
    q=0;
    for(i=0;i<x;i++)
    {
        p*=10;
        q*=10;
        p+=a[i]-'0';
        q+=b[i]-'0';
    }
    printf("%llu - %llu = %llu = 9 * %llu\n",q,p,q-p,(q-p)/9);
}
 return 0;
}
