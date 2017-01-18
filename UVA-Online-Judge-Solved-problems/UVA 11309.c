#include<stdio.h>

void palindrome_time(int hh,int mm)
{
    mm++;
    if(mm==60) mm=0,hh++;
    if(hh==24) hh=0;

    int p=hh%10,q=mm%10;
    int r=hh/10,s=mm/10;
    if((hh==0 &&(mm<10||s==q))||(r==0 &&p!=0 &&p==q) ||(r!=0 &&r==q &&p==s))
    {
            printf("%02d:%02d\n",hh,mm);
            return;
    }
    palindrome_time(hh,mm);
}
int main()
{
    int hr,mn,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d:%d",&hr,&mn);
        palindrome_time(hr,mn);
    }
    return 0;
}
