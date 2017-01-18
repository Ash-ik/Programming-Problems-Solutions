#include<stdio.h>
#include<stdbool.h>
#include<map>
using namespace std;

int binarySearch(int low,int high,int a[],int key)
{
    int mid=(high+low)/2;
    if(low==mid && a[low]<key &&a[high]>key)
    {
        printf("%d %d\n",a[low],a[high]);
        return 0;
    }
    else if(a[low]<key &&a[mid]>key)
        binarySearch(low,mid,a,key);
    else
        binarySearch(mid,high,a,key);

}


int main()
{
    map<int,int>index;
    int t,q,i=0;
    scanf("%d",&t);
    int a[t+1];
while(t--)
{
    int temp;
    scanf("%d",&temp);
    if(!index[temp])
    {
        index[temp]=++i;
        a[i]=temp;
    }
}
scanf("%d",&q);
while(q--)
{
    int p;
    scanf("%d",&p);
        if(index[p])
    {
        int mn=index[p],mx=index[p];
        if(mn-1<1)
            printf("X ");
        else printf("%d ",a[mn-1]);
        if(mx+1>i)
            printf("X\n");
        else printf("%d\n",a[mx+1]);
    }
    else if(p<a[1]) printf("X %d\n",a[1]);
    else if(p>a[i]) printf("%d X\n",a[i]);
    else
        binarySearch(1,i,a,p);
}
return 0;
}

