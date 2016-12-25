#include<stdio.h>
int main()
{
    char temp,a[85];
    int ltr[100],t,n,i,val,x;
        scanf("%d",&t);
        while(t--)
        {
            scanf("%s",a);
            temp=a[0],val=ltr['C']=ltr['H']=ltr['O']=ltr['N']=0;
            for(i=1;a[i];i++)
            {
                if(a[i]>='1'&&a[i]<='9')
                    val=val*10+a[i]-'0';
                else
                {
                    if(val==0)  val=1;
                    ltr[temp]+=val;
                    temp=a[i];
                    val=0;
                }
            }
            if(val==0) val=1;
            ltr[temp]+=val;
            printf("%.3lf\n",ltr['C']*12.01+ltr['H']*1.008+ltr['O']*16.0+ltr['N']*14.01);
        }
        return 0;
}
