#include<stdio.h>
int min(int a,int b)
{
    if(a<=b) return a;
    else return b;
}
int main()
{
    int a,b;
    while(scanf("%d %d",&a,&b)==2 && !(a==-1 &&b==-1))
        {
            if(b>a)
            printf("%d\n",min((b-a),(100+a-b)));
            else printf("%d\n",min((a-b),(100+b-a)));
        }
        return 0;
}
