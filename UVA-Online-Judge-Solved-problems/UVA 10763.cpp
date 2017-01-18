#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>
#define getchar_unlocked getchar
int scan_positive_int(int *a)
{
        int x=0;
        register int c=getchar_unlocked();
        for(; c>47 && c<58 ; c = getchar_unlocked())
        {
                x = (x<<1) + (x<<3) + c - 48;
        }
        *a=x;
}

int main()
{
    int t,p,q,ans;
    bool exchangable;
    char solution[10000];
    while(scan_positive_int(&t) &&t)
    {
        ans=0;
        if(t==0) return 0;
        while(t--)
            scan_positive_int(&p),scan_positive_int(&q),ans^=(p^q);

            if(ans)
                strcat(solution,"NO\n");
            else
                strcat(solution,"YES\n");
    }
    fwrite(solution,1,strlen(solution),stdout);
    return 0;
}

