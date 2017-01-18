#include<stdio.h>
#include<string.h>
#include<ctime>
#include<stdlib.h>
#define pc putchar_unlocked
#define putchar_unlocked putchar
#define read freopen("dataN.txt","r",stdin)
#define write freopen("1149.in","w",stdout)
int main()
{
    write;
        double cl = clock();
    int t,i,j,cnt,len,k;
    t=20;
    printf("%d\n",t);
    while(t--)
    {
        printf("\n");
        if(t) cnt=100;
        else cnt=100000;
        i=0;
        while(!i) i=rand()%cnt;
        printf("%d\n",i);
        j=0;
        while(!j) j=rand()%cnt;
        printf("%d\n",j);
        while(i--)
        {
            k=0;
            while(!k || k>j) k=rand()%cnt;
            printf("%d\n",k);
        }
    }
    cl = clock() - cl;
    fprintf(stderr, "Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;

}
