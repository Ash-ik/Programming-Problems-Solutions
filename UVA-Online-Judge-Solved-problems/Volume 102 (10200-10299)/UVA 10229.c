#include<stdio.h>
#include<math.h>

void multiply(int x[2][2],int y[2][2])
{
    int r0,r1,c0,c1;
    r0=x[0][0]*y[0][0]+x[0][1]*y[1][0] ; r1=x[0][0]*y[0][1]+x[0][1]*y[1][1];
    c0=x[1][0]*y[0][0]+x[1][1]*y[1][0] ; c1=x[1][0]*y[0][1]+x[1][1]*y[1][1];

    x[0][0]=r0 , x[0][1]=r1;
    x[1][0]=c0 , x[1][1]=c1;


}

void power(int mat[2][2],int n)
{
    if(n==0 || n==1)
        return;

        int x[2][2]={0,1,1,1};

        power(mat,n/2);

        multiply(mat,mat);
        if(n%2)
            multiply(mat,x);
}

int solve(int n,int mod)
{
    if(n==0) return 0;

    int mat[2][2]={0,1,1,1};
    power(mat,n-1);

    return mat[1][1]&(mod);
}


#define getchar_unlocked getchar
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        if(c==EOF) return EOF;
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}


int main()
{
    int ans,n,m,em[20]={1};
    for(m=1;m<20;m++)
        em[m]=em[m-1]<<1;

    while((scan_positive_int(&n),scan_positive_int(&m))!=EOF)
        printf("%d\n",solve(n,em[m]-1));
    return 0;
}
