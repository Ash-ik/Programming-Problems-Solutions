#include<stdio.h>
int main()
{
    long int ans[120];
    int t,max=0,j,min,tmax=0,tmin=0,temp,i,d[120],m[120],y[120];
    char name[120][50];
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%s %d %d %d",&name[i],&d[i],&m[i],&y[i]);
        ans[i]=d[i]+m[i]*30+y[i]*365;
        if(ans[i]>max)
        {
            max=ans[i];
            tmin=i;
        }
    }
    min=ans[0];
    for(j=0;j<t;j++)
        if(ans[j]<min)
        {
            min=ans[j];
            tmax=j;
        }
    printf("%s\n%s\n",name[tmin],name[tmax]);
    return 0;
}
