#include<stdio.h>
#include<algorithm>
using namespace std;
struct save
{
    int pos,value;
};
bool compare(save x,save y)
{
    return x.value<y.value;
}
int main()
{
    int i,t,n,x,mini;
    char y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        save a[n+1];
        mini=1002;
        for(i=0;i<n;i++)
        {
            int temp=1;
            while(scanf("%d%c",&x,&y) &&y!='\n') temp++;
            if(temp<mini)
                mini=temp;
            a[i].value=temp;
            a[i].pos=i+1;
        }

        for(i=0;i<n;i++)
            {
                if(a[i].value==mini)
                    {printf("%d",a[i].pos);break;}
            }
            i++;
        for(;i<n;i++)
            {
                if(a[i].value==mini)
                    printf(" %d",a[i].pos);
            }
            printf("\n");
    }
    return 0;
}
