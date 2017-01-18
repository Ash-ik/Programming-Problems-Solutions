#include<stdio.h>
#include<math.h>
int mnth(char mon[]) {
        if (strcmp(mon, "January") == 0)
                return 1;
        if (strcmp(mon, "February") == 0)
                return 2;
        return 3;
}
int main()
{
    char stm[100],enm[100];
    int t,i=1,std,sty,end,eny,ms,me,ans,x;
    scanf("%d",&t);
    while(i<=t)
    {
        ans=0;
        scanf("%s %d, %d",stm,&std,&sty);
        scanf("%s %d, %d",enm,&end,&eny);
        ms=mnth(stm);
        me=mnth(enm);
        if(ms>2)
            sty++;
        if(me<2||(me==2&&end<29))
                        eny--;
                ans=eny/4-(sty-1)/4-eny/100+(sty-1)/100+eny/400-(sty-1)/400;
        printf("Case %d: %d\n",i++,ans);
    }
    return 0;
}
