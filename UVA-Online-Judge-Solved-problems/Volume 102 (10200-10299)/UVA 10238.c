#include <stdio.h>
#include<string.h>
#define MAX 1000
int findWays(int m, int n, int x)
{
    if (m*n <= x)
        return (m*n == x);
    if (n >= x)
        return (n == x);
    int table[n + 1][x + 1],i,j,k;
    memset(table, 0, sizeof(table));

    for (j = 1; j <= m && j <= x; j++)
        table[1][j] = 1;

    for (i = 2; i <= n; i++)
        for (j = 1; j <= x; j++)
            for (k = 1; k <= m && k < j; k++)
                table[i][j] += table[i-1][j-k];

    return table[n][x];
}
char* multiply(char num1[],char num2[]){
    static char mul[MAX];
    char a[MAX];
    char b[MAX];
    char c[MAX];
    char temp[MAX];
    int la,lb;
    int i=0,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;


    while(num1[i]){
         a[i] = num1[i];
         i++;
    }
    a[i]= '\0';

    i=0;
    while(num2[i]){
         b[i] = num2[i];
         i++;
    }
    b[i]= '\0';

    la=strlen(a)-1;
        lb=strlen(b)-1;

        for(i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }

    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }

    k=0;
    r=0;
    for(i=0;i<la+lb+2;i++){
         sum =0;
         y=0;
         for(j=1;j<=lb+1;j++){
             if(i <= la+j){
                 sum = sum + temp[y+i];
             }
             y += j + la + 1;
         }
         c[k++] = (sum+r) %10;
         r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul[j++]=c[i] + 48;
    }
    mul[j]='\0';

    return mul;
}

char* power(int in,int y)
{
    if(!y) return "1";
    char x[20];
    sprintf(x,"%d",in);
    char *ans=&x[0];
    while(--y)
        ans=multiply(ans,x);

    while(*ans)
    if(*ans=='0')
         ans++;
    else
         break;
    return ans;
}

int main()
{
    int f,n,x;
    char in[20];

    while(scanf("%d %d %d",&f,&n,&x)!=EOF)
        printf("%d/%s\n",findWays(f,n,x),power(f,n));
    return 0;
}
