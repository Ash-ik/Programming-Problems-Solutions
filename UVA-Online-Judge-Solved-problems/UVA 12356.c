#include<stdio.h>
#include<string.h>
#include<stdbool.h>
#define MAX 100002
#define scan(x) x=scan_positive_int()
#define getchar_unlocked getchar
int scan_positive_int()
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        return x;
}
int main()
{
    int i,j,B,S,L,R,left[MAX],right[MAX];
    bool dead[MAX];
    while(1)
    {
        scan(B);
        scan(S);
        if(!B &&!S) return 0;
        for(i=0;i<=B+1;i++)
        {
            left[i]=i-1;
            right[i]=i+1;
            dead[i]=false;
        }
        for(i=1;i<=S;i++)
        {
            scan(L);
            scan(R);
            int newLeft=left[L];
            while(dead[newLeft]) newLeft=left[newLeft];
            int newRight=right[R];
            while(dead[newRight]) newRight=right[newRight];

            for(j=L;j<=R;j++)
            {
                dead[j]=true;
                left[j]=newLeft;
                right[j]=newRight;
            }
            if(newLeft>0 && newRight<=B) printf("%d %d\n",newLeft,newRight);
            else if(newRight<=B) printf("* %d\n",newRight);
            else if(newLeft>0) printf("%d *\n",newLeft);
            else printf("* *\n");
        }
        puts("-");
    }
    return 0;

}
