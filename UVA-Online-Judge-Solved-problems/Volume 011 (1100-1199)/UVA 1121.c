#include<stdio.h>
#define getchar_unlocked getchar
#define read freopen("dataN.txt","r",stdin)
#define write freopen("dataOUT.txt","w",stdout)
void scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}
int i,N,S,A[100099],tail,min,sum;
int main()
{
    while(scanf("%d %d\n",&N,&S)==2)
    {
        for(i=0;i<N;i++)
            scan_positive_int(&A[i]);
		tail=-1,sum=0,min=0xfffffff;
		for(i=0;i<N;i++)
        {
			while(sum <S && tail+1<N)
				sum += A[++tail];
			if(min>tail-i && sum >= S)
				min=tail-i;
			sum-=A[i];
		}
		if(min==0xfffffff)	puts("0");
		else printf("%d\n", min+1);
	}
    return 0;
}
