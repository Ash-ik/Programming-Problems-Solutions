#include<stdio.h>
#include<string.h>
int time_dif(int hh2,int mm2,int ss2,int hh1,int mm1,int ss1)
{
    return((hh2-hh1)*3600+(mm2-mm1)*60+(ss2-ss1));
}
int main()
{
    int cases=0,homeScore,guestScore,hh1,mm1,ss1,hh2,mm2,ss2,temp,ans,i,j,a[1000]={6,2,5,5,4,5,6,3,7,6},score;
    char cmd[10],side[10];

    for(i=10;i<1000;i++)
    {
        ans=0,temp=i;
        while(temp)
        {
            ans=ans+a[temp%10];
            temp=temp/10;
        }
        a[i]=ans;
    }
    while(scanf("%s",cmd)!=EOF)
    {
        ans=guestScore=homeScore=0;
        if(!strcmp(cmd,"START"))
        {
            scanf("%d:%d:%d",&hh1,&mm1,&ss1);
            while(scanf("%s",cmd) &&strcmp(cmd,"END"))
            {
                scanf("%d:%d:%d %s %d",&hh2,&mm2,&ss2,side,&score);
                temp=time_dif(hh2,mm2,ss2,hh1,mm1,ss1);
                ans=ans+(a[homeScore]+a[guestScore])*temp;
                hh1=hh2,mm1=mm2,ss1=ss2;
                if(!strcmp(side,"home")) homeScore=homeScore+score;
                else guestScore=guestScore+score;

                temp=time_dif(hh2,mm2,ss2,hh1,mm1,ss1);
                ans=ans+(a[homeScore]+a[guestScore])*temp;
                hh1=hh2,mm1=mm2,ss1=ss2;
            }
            scanf("%d:%d:%d",&hh2,&mm2,&ss2);
                temp=time_dif(hh2,mm2,ss2,hh1,mm1,ss1);
                ans=ans+(a[homeScore]+a[guestScore])*temp;
                printf("Case %d: %d\n",++cases,ans);
        }
    }
    return 0;
}
