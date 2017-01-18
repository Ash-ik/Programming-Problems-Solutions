/*
    Assignment on Krushkal Algorithm
    Name:Fahim Al Mahmud Ashik
    Roll:1207033
                    */

#include<stdio.h>
#include<stdlib.h>
#define inf 2147483647   /* A big number so that it can never be minimum */
#define MAX 10000

int i,j,k,a,b,u,v,n,edge_in_MST=1;
int min,mincost=0,cost[MAX][MAX],parent[MAX];


/* Find out the parent of the given edge */
int find_parent(int i)
{
    while(parent[i])
        i=parent[i];
    return i;
}

int main()
{

    /*

    Let us create following weighted graph
             10
        0--------1
        |  \     |
       6|   5\   |15
        |      \ |
        2--------3
            4

     cost matrix of the following graph:
          0   1  2   3
     ,----------------
   0 |    0  10  6   5
   1 |   10   0  0  15
   2 |    6   0  0   4
   3 |    5  15  4   0
                                      */


    printf("\nEnter the no. of vertices\n");
    scanf("%d",&n);
    printf("\nEnter the cost adjacency matrix\n");

/*Take input for cost among all the edges */
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
        {
            scanf("%d",&cost[i][j]);
/*If there is no direct edge between two vertices,then make its value highest,
otherwise while finding min the edge with cost 0 will become minimum,which isn't correct */
                if(cost[i][j]==0)
                    cost[i][j]=inf;
        }


    printf("\n\tMinimum Cost Spanning Tree are\n\n");
    printf("\t\tEdge\tCost\n");


    while(edge_in_MST<n)     /*If the given graph has N edges,then In a MST the number of edges is N-1 */
    {

/*Find out the next edge with minimum cost*/
        for(i=0,min=inf;i<n;i++)
            for(j=0;j<n;j++)
                if(cost[i][j]<min)
                {
                    min=cost[i][j];
                    u=i;
                    v=j;
                }


/* Find out if adding edge (u,v) doesn't create a loop.That means you have to find out the parent of each edge.If they are same,then it'll create loop */
        if(find_parent(u)!=find_parent(v))
        {
            parent[u]=v;

            printf("\n\t\t%d,%d\t%d\n",u,v,min);

            edge_in_MST++;
            mincost+=min;
        }
/*If an edge is used to build MST then the cost of the edge has to make such bigger that it can't be minimum next time. here inf represents such a big number*/
        cost[u][v]=cost[v][u]=inf;
    }
    printf("\n\t  Minimum cost of MST= %d\n",mincost);   /* Totat cost of all the edges in our final MST */



/*

    Your MST is:

             10
        0--------1
          \
           5\
              \
        2--------3
            4

The edges of Minimum Cost Spanning Tree are

1 edge (2,3) =4
2 edge (0,3) =5
3 edge (0,1) =10

Minimum cost of MST= 19

*/

    return 0;
}
