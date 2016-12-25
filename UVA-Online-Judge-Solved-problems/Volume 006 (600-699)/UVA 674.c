#include<stdio.h>
#define getchar_unlocked getchar
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        if(c==EOF) return EOF;
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}
int main()
{
    int i,j,n,a[5]={50,25,10,5,1};
    long ans[10000]={1};
    for(i=0;i<5;i++)
        for(j=a[i];j<10000;j++)
            ans[j]=ans[j]+ans[j-a[i]];

    while(scan_positive_int(&i)!=EOF)
        printf("%ld\n",ans[i]);

    return 0;
}
