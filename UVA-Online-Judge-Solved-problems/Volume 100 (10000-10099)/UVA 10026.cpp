#include<stdio.h>
#include<stdbool.h>
#include<algorithm>
using namespace std;
struct data
{
    double ratios;
    int pos;
};
bool compare(data a,data b)
{
    return a.ratios>b.ratios;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);

        int p,f;
        data save[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d %d",&p,&f);
            save[i].ratios=(double)(f*1.0)/p;
            save[i].pos=i+1;
        }
         sort(save,save+n,compare);

        printf("%d",save[0].pos);
        for(int i=1;i<n;i++)
            printf(" %d",save[i].pos);
        printf("\n");

        if(t)
            printf("\n");
    }
    return 0;
}
