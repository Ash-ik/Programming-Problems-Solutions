#include<stdio.h>
int main()
{
    int z,p,V[120],X[120],L[120],C[120],i,I[120],ai,v,x,l,c;
    C[1]=0,L[1]=0,X[1]=0,V[1]=0,I[1]=1;
    for(z=2;z<=101;z++)
    {
        i=z,ai=0,v=0,x=0,l=0,c=0;
        if(i%10==1 || i%10==4 || i%10==6 || i%10==9)
    ai=ai+1;
    if(i%10==2 || i%10==7)
    ai=ai+2;
    if(i%10==3 || i%10==8)
    ai=ai+3;
    if(i%10==4 || i%10==5 || i%10==6 || i%10==7 || i%10==8)
    v=v+1;
    if((i>=9 && i<19) || (i>=40 && i<49) || (i>=59 && i<69) || (i>=90 && i<99))
    x=x+1;
    if((i>=19 && i<29) || i==49 || (i>=69 && i<79) || i==99)
    x=x+2;
    if((i>=29 && i<39) || (i>=79 && i<89))
    x=x+3;
    if(i==39 || i==89)
    x=x+4;
    if(i>=40 && i<90)
    l=l+1;
    if(i>=90)
    c=c+1;
    I[z]=I[z-1]+ai;
    V[z]=V[z-1]+v;
    X[z]=X[z-1]+x;
    L[z]=L[z-1]+l;
    C[z]=C[z-1]+c;
    }
    while(scanf("%d",&p)==1 &&p)
    printf("%d: %d i, %d v, %d x, %d l, %d c\n",p,I[p],V[p],X[p],L[p],C[p]);
    return 0;
}
