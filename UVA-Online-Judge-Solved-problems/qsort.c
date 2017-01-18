#include<stdio.h>
#include<string.h>
int main()
{
    int b,d,y,i,n,LL=0,lp=28,l=0;
    char a[10];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d-%3s-%d",&d,a,&y);
    if(((y%4)==0 &&(y%100)!=0)|| y%400==0)
        {lp=29; l=1;LL=1;}
    if(!strcmp(a,"JAN"))
        printf("Case %d: %d Hundreds\n",i,d);
    else if(!strcmp(a,"FEB"))
        printf("Case %d: %d Hundreds\n",i,d+31);
    else if(!strcmp(a,"MAR"))
        printf("Case %d: %d Hundreds\n",i,d+31+lp);
    else if(!strcmp(a,"APR"))
        printf("Case %d: %d Hundreds\n",i,d+62+lp);
    else if(!strcmp(a,"MAY"))
        printf("Case %d: %d Hundreds\n",i,d+92+lp);
    else if(!strcmp(a,"JUN"))
        printf("Case %d: %d Hundreds\n",i,d+123+lp);
    else if(!strcmp(a,"JUL"))
        printf("Case %d: %d Hundreds\n",i,d+153+lp);
    else if(!strcmp(a,"AUG"))
        printf("Case %d: %d Hundreds\n",i,d+184+lp);
    else if(!strcmp(a,"SEP"))
        printf("Case %d: %d Hundreds\n",i,d+215+lp);
    else if(!strcmp(a,"OCT") &&d<27-l )
        printf("Case %d: %d Hundreds\n",i,d+245+lp);
    else if(!strcmp(a,"OCT") &&d>27-l)
        printf("Case %d: %d Tens\n",i,d-27+l);
    else if(!strcmp(a,"NOV"))
        printf("Case %d: %d Tens\n",i,d+4+l);
    else if(!strcmp(a,"DEC") && d<26-l)
        printf("Case %d: %d Tens\n",i,d+34+l);
        else
        printf("Case %d: %d Ones\n",i,d-26+l);
    }
    return 0;
}
