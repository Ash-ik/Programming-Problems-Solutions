#include<stdio.h>
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
    int i,j,a[5]={50,25,10,5,1};
    long long ans[30002]={1};

    for(i=0;i<5;i++)
        for(j=a[i];j<=30000;j++)
            ans[j]=ans[j]+ans[j-a[i]];

    while(scan_positive_int(&i)!=EOF)
    {
        long long counts=ans[i];
        if(counts==1)
            printf("There is only 1 way to produce %d cents change.\n",i);
        else
            printf("There are %lld ways to produce %d cents change.\n",ans[i],i);
    }

    return 0;
}

