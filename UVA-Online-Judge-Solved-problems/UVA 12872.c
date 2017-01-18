#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#define MAXIMUM_BUFFER_CAPACITY 300000

int arr[32][32], n, m;
int valid_pos[900][2],N,total=0;

char buffer_to[MAXIMUM_BUFFER_CAPACITY];
char *buffer_ptr = buffer_to;


int scan_integer()
{
    int k = 0;
    while( *buffer_ptr < 33 )
        buffer_ptr++;
    do {
        k = k*10 + *buffer_ptr++ - '0';
    } while(*buffer_ptr > 32);
    return k;
}


int minimum(int a,int b)
{
    if(a<b) return a;
    return b;
}
int isEmpty()
{
    return total==0;
}

void remove_plus_sign(int x, int y, int w)
{
    int i;
    for (i=x-w;i<=x+w;i++) arr[i][y]--,total--;
    for (i = y - w; i <= y + w; i++)
        arr[x][i]--, total--;

        arr[x][y]++, total++;
}
void restore_plus_sign(int x, int y, int w)
{
    int i;
    for(i=x-w;i<=x+w;i++) arr[i][y]++,total++;

    for(i=y-w;i<=y+w;i++) arr[x][i]++, total++;

    arr[x][y]--, total--;
}
int plus_exist(int x,int y,int w)
{
    int i;
    for(i=x-w;i<=x+w;i++) if (!arr[i][y]) return 0;

    for(i=y-w;i<=y+w;i++) if(!arr[x][i])  return 0;

    return 1;
}


int solution(int index,int used,int lower_bound,int upper_bound)
{
    int i;

    if(isEmpty())
    {
        printf("%d\n%d %d\n",used,lower_bound+1,upper_bound+1);
        return 1;
    }
    if (index==N)
        return 0;
    int t=minimum(minimum(valid_pos[index][0],valid_pos[index][1]),minimum(n-1- valid_pos[index][0],m-1-valid_pos[index][1]));
    for (i=t;i>=1;i--)
    {
        if (plus_exist(valid_pos[index][0],valid_pos[index][1],i))
        {
            remove_plus_sign(valid_pos[index][0],valid_pos[index][1],i);

            if(solution(index+1,used+1,valid_pos[index][0],valid_pos[index][1])) return 1;

            restore_plus_sign(valid_pos[index][0],valid_pos[index][1],i);
        }
    }
    if (solution(index+1,used,lower_bound,upper_bound))
        return 1;
    return 0;
}
int main()
{
    fread(buffer_to,1,MAXIMUM_BUFFER_CAPACITY,stdin);
    int i,j,testcase;
testcase=scan_integer();
    while (testcase--)
    {
    n=scan_integer();
    m=scan_integer();
        N=0;

        for(i=0;i<n;i++)
            for (j=0;j<m;j++)
              {
                  arr[i][j]=scan_integer(),total+=arr[i][j];
                    if(arr[i][j]==1)
                        valid_pos[N][0]=i,valid_pos[N][1]=j,N++;
              }


        solution(0,0,-1,-1);
    }
    return 0;
}
