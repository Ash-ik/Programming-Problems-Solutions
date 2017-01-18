#include<stdio.h>
#include<string.h>
int ans4[4]={},ans6[108]={},ans8[2367]={},cnt4=0,cnt6=0,cnt8=0;
int main()
{
    int i,j,k;
    for(i=1;i<1000;i++)
        for(j=i+1;j<1000;j++)
    {
        int x[15],p=i,q=j,r=0,s;
        char n[10],m[10];

        if(i%10==0 &&j%10==0)continue;

        while(p)
        {
            x[r++]=p%10;
            p=p/10;
        }
        while(q)
        {
            x[r++]=q%10;
            q=q/10;
        }


        p=i*j;
        q=0;
        s=0;
        while(p)
        {
            for(s=0;s<r;s++)
            if(p%10==x[s])
            {
                x[s]=-3;
                q++;
                break;
            }
            p=p/10;
        }

        p=i*j;
        if((q==4 &&i<100 &&j<100) && !(p&1))
        ans4[cnt4++]=p;
        else if((q==6 &&i<1000 &&j<1000) && !(p&1))
        ans6[cnt6++]=p;
//        else if((q==8 &&i<10000 &&j<10000) && !(p&1))
//        ans8[cnt8++]=p;
    }
    for(i=0;i<cnt4;i++)
        printf("%d\n",ans4[i]);
    puts("");
    for(i=0;i<cnt6;i++)
        printf("%d\n",ans6[i]);
    puts("");
//    for(i=0;i<cnt8;i++)
//        printf("%d\n",ans8[i]);
//    puts("");
}
