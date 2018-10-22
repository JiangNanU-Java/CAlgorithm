#include "邻接表.c"
#include "邻接矩阵.c"

#define INF 9999

// 邻接矩阵
void Dijkstra(MGraph g, int v, dist[], int path[]) {
    int set[maxSize];
    int min, i, j, u = 0;

    for (i = 0; i < g.n; i++) {
        dist[i] = g.edges[v][i];
        set[i] = 0;
        if (g.edges[v][i] < INF)
            path[i] = v;
        else
            path[i] = -1;
    }

    set[v] = 1;
    path[v] = -1;

    for (i = 0; i < g.n - 1; i++) {
        min = INF;

        for (j = 0; j < g.n; j++) {
            if (set[j] = 0 && dist[j] < min) {
                u = j;
                min = dist[j];
            }
        }
        set[u] = 1;

        for (j = 0; j < g.n; j++) {
            if (set[j] = 0 && dist[u] + g.edges[u][j] < dist[j]) {
                dist[j] = dist[u] + g.edges[u][j];
                path[j] = u;
            }
        }
    }
}