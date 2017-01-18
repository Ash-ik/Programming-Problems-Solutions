#include<stdio.h>
int main()
{
    int initial_pos,a,b,c;
    while(scanf("%d %d %d %d",&initial_pos,&a,&b,&c)==4  &&(initial_pos+a+b+c) )
    {
        register int temp=0;
        if(a>=initial_pos)
            temp+=(40-a)+initial_pos;
            else temp+=(initial_pos-a);
        if(b>=a)
            temp+=(b-a);
        else temp+=(40-a)+b;
        if(c>=b)
        temp+=(40-c)+b;
        else
            temp+=(b-c);
        printf("%d\n",temp*9+1080);
    }
    return 0;
}
