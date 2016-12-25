#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,a[13]={10000,5000,2000,1000,500,200,100,50,20,10,5};
    long long ans[30102]={1};
    double x;
    for(i=0;i<11;i++)
        for(j=a[i];j<=30100;j++)
            ans[j]=ans[j]+ans[j-a[i]];
char in[10];
    while(gets(in))
        {
            sscanf(in,"%d.%d",&i,&j);
            n=i*100+j;
            if(n==0) return 0;
            x=i+(j/100.0);
            printf("%6.2lf%17lld\n",x,ans[n]);
        }

    return 0;
}


