#include "邻接表.c"

int visit[maxSize];

void DFS(AGragh *G, int v) {
    ArcNode *p;
    visit[v] = 1;
    // TODO v的操作
    p = G->adjlist[v].firstarc;
    while (p != (ArcNode *) NULL) {
        if (visit[p->adjvex] == 0) {
            DFS(G, p->adjvex);
        }
        p = p->nextarc;
    }
}