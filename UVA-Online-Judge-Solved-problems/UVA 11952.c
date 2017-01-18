#include <stdio.h>
#include<stdbool.h>
bool flag;
long long convert(char num[],long long base)
{
    long long sum=0;
    int i;
    for(i=0;num[i];i++)
    {
        sum=num[i]-'0'+sum*base;
        if(num[i]-'0'>=base)
            flag=false;
    }
    return sum;
}

int main()
{
    int t, i;
    scanf("%d", &t);

    while(t--)
        {
            char A[10], B[10], C[10];
        scanf("%s + %s = %s",A,B,C);
        long long x,y,z;
        int ok=0;
        for(x=0;A[x];x++)     A[x] == '1';
        for(y=0; B[y];y++)     B[y] == '1';
        for(z=0; C[z]; z++)    C[z] == '1';
        if(x+y==z)
        ok=1;
        for(i=2;i<=18;i++)
        {
            flag=true;
            x=convert(A, i),y=convert(B, i),z=convert(C, i);
            if(x+y==z && flag)
                {
                    printf("%d\n", i);
                    break;
                }
        }
        if(i==19 && ok)
            {
                printf("1\n");
                continue;
            }
        if(i==19)
            printf("0\n");
    }
    return 0;
}
