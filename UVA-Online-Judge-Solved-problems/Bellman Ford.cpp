#include <iostream>

typedef struct {
    int u, v, w;
} Edge;

const int NODES = 5 ; /* the number of nodes */
int EDGES;            /* the number of edges */
Edge edges[32];       /* large enough for n <= 2^NODES=32 */
int d[32];            /* d[i] is the minimum distance from source node s to node i */

#define INFINITY INT_MAX

void BellmanFord(int src)
{
    int i, j;

    for (i = 0; i < NODES; ++i) d[i] = INFINITY;
    d[src] = 0;

    for (i = 0; i < NODES - 1; ++i) {
        for (j = 0; j < EDGES; ++j) {
            if (d[edges[j].u] + edges[j].w < d[edges[j].v]) {
                d[edges[j].v] = d[edges[j].u] + edges[j].w;
	    }
	}
    }

    for (i = 0; i < NODES - 1; ++i) {
        for (j = 0; j < EDGES; ++j) {
            if (d[edges[j].u] + edges[j].w < d[edges[j].v]) {
                printf("Graph contains a negative-weight cycle\n");
		exit(1);
	    }
	}
    }
}

int main()
{
    int i, j, w;
    int  k = 0;
 freopen("input.txt","r",stdin);

    for (i = 0; i < NODES; ++i) {
        for (j = 0; j < NODES; ++j) {
            fscanf(fin, "%d", &w);
            if (w != 0) {
                edges[k].u = i;
                edges[k].v = j;
                edges[k].w = w;
                k++;
            }
        }
    }
    fclose(fin);
    EDGES = k;

    for (i = 0; i < NODES; ++i) printf("Node %d\t", i );
    printf("\n--------------------------------------\n");

    int source_vertex = 0;
    BellmanFord(source_vertex);

    for (i = 0; i < NODES; ++i) printf("%d\t", d[i] );

    return 0;
}
