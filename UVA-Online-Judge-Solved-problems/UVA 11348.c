#include<stdio.h>
#include<stdbool.h>
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


int maximum(int a,int b)
{
    if(a>b) return a;
    return b;
}
int main()
{

    int K, C = 1;
    scan_positive_int(&K);
    while (K--)
    {
        int i,N, num[10001] = {}, owner[10001] = {}, maxType = 0;
        bool unique[10001] = {};
        scan_positive_int(&N);
        for (i = 1; i <= N; i++)
        {
            int M;
            scan_positive_int(&M);
            while (M--)
            {
                int type;
                scan_positive_int(&type);
                num[type]++;
                if (!owner[type])
                {
                    unique[type] = true;
                }
                else if (owner[type] != i)
                {
                    unique[type] = false;
                }
                owner[type] = i;
                maxType =maximum(type,maxType);
            }
        }
        int all = 0, own[99] = {};
        for (i = 0; i <= maxType; i++)
        {
            all += unique[i];
            own[owner[i]] += unique[i];
        }
        printf("Case %d: ", C++);
        for (i = 1; i <= N; i++)
        {
            if(i==N)
            printf("%.6lf%%\n",own[i] / (double)all * 100.0);
            else
            printf("%.6lf%% ",own[i] / (double)all * 100.0);
        }
    }
    return 0;
}
