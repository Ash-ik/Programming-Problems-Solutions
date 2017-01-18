#include<stdio.h>
#include<conio.h>
#define max 10
#define INFINITY 1000
int w[max][max];
int n_size;
int p[max];
void in_dat()
{
    printf("\n\t Multi-Stage Graph \n");
    printf("\n Enter the number of nodes : ");
    scanf("%d",&n_size);
    int i;
    for(i=0; i<n_size; i++)
    {
        w[i][i] = 0;
        for(int j=i+1; j<n_size; j++)
        {
            printf("Enter the weight of edge '%c' to '%c': ",65+i,65+j);
            scanf("%d",&w[i][j]);
            w[j][i] = 0;
        }
    }
}
void dis_dat()
{
    printf("\n The Path adjacent matrix \n");
    printf("\n ");
    for(int i=0; i<n_size; i++)
    {
        printf("\n");
        for(int j=0; j<n_size; j++)
            printf("\t %d",w[i][j]);
    }
    getch();
    fflush(stdin);
}
int findshort(int sr,int dst)
{
    if(sr == dst)
        return 0;
    else
    {
        int ret = -1;
        int min = INFINITY;
        int tdst;
        for(int i=0; i<n_size; i++)
        {
            if(w[sr][i] != 0)
            {
                ret = 0;
                tdst = w[sr][i]+findshort(i,dst);
                if(min >tdst)
                {
                    min = tdst;
                    p[sr] = i;
                }
            }
        }
        if(ret == -1)
            return INFINITY;
        else        return min;
    }
}
void MSG()
{
    char s,d;
    int si,di;
    printf("\nEnter the source and destination node : ");
    scanf("%c %c",&s,&d);
    fflush(stdin);
    si = (int) s-65;
    di = (int) d-65;
    int dist = findshort(si,di);
    if(dist >= INFINITY)
        printf("\n The shortest distance between '%c' and '%c' can't be computed");
    else
    {
        printf("\n The shortest distance between '%c' and '%c' : %d",s,d,dist);
        printf("\n The shortest path : %c",s);
        while(si!=di)
        {
            printf(" %c",65+p[si]);
            si = p[si];
        }
    }
}
int main()
{
    in_dat();
    dis_dat();
    MSG();
    return 0;
}
