#include <stdio.h>
#include <string.h>

#define MAX 1000

char op1[MAX];
char op2[MAX];
char res[MAX];

char fibo_cache[MAX][MAX] = {"0","1"};
int fibo_cache_count = 1;

int cmp()
{
    int l1 = strlen(op1);
    int l2 = strlen(op2);
    int i;
    if (l1!=l2) return l1-l2;
    for(i=l1-1; i>=0; i--)
    {
        int aux = (op1[i] - '0') - (op2[i] - '0');
        if(aux != 0) return aux;
    }
    return 0;
}

set_op1(int n)
{
    if(n==0)
    {
        memcpy(op1,"0",2);
    }
    int i = 0;
    while(n)
    {
        op1[i++] = n%10+'0';
        n/=10;
    }
    op1[i] = 0;
}

void rev(char v[])
{
    int l = strlen(v);
    int i;
    char cc;
    for(i=0; i<l-1-i; i++)
    {
        cc = v[i];
        v[i] = v[l-1-i];
        v[l-1-i] = cc;
    }
}

void add()
{
    memset(res,0,MAX);
    int rem = 0;
    int i, l1 = strlen(op1), l2 = strlen(op2);
    int l = l1 > l2 ? l1 : l2;

    for(i=0; i<l; i++)
    {
        if(i >= l1) op1[i] = '0';
        if(i >= l2) op2[i] = '0';
        int aux = (op1[i] - '0') + (op2[i] - '0') + rem;
        res[i] = '0' + (aux % 10);
        rem = aux / 10;
    }
    if(rem) res[l] = res[l] + rem + '0';


}

void fibonacci(int n)
{
    memset(res,0,MAX);
    if(n<=fibo_cache_count)
    {
        memcpy(res,fibo_cache[n],MAX);
        return;
    }
    for(; fibo_cache_count<=n; fibo_cache_count++)
    {
        memcpy(op1,fibo_cache[fibo_cache_count],MAX);
        memcpy(op2,fibo_cache[fibo_cache_count-1],MAX);
        add();
        memcpy(fibo_cache[fibo_cache_count+1],res,MAX);
    }
    memcpy(res,fibo_cache[n],MAX);

}

int main()
{
    int i,j,n,r;
    char inp1[MAX];
    char inp2[MAX];
    memset(inp1,0, MAX);
    memset(inp2,0, MAX);
    memset(op1,0, MAX);
    memset(op2,0, MAX);
    fibonacci(500);
    while(1)
    {
        scanf("%s %s",inp1, inp2);
        if(inp1[0] == '0' && inp2[0] == '0') break;
        rev(inp1);
        rev(inp2);
        r = 0;
        /* find lowest */
        memcpy(op1,inp1,MAX);
        for(i=2; i<500; i++)
        {
            memcpy(op2,fibo_cache[i],MAX);
            int aux = cmp();
            if(aux <= 0) break;
        }
        memcpy(op1,inp2,MAX);
        for(;; i++)
        {
            memcpy(op2,fibo_cache[i],MAX);
            int aux = cmp();
            if(aux >= 0)
            {
                r++;
                rev(fibo_cache[i]);
                rev(fibo_cache[i]);
            }
            else break;
        }
        printf("%d\n",r);
    }
    return 0;
}
