#include "邻接表.c"

void BFS(AGragh *G, int v, int visit[maxSize]) {
    ArcNode *p;
    int que[maxSize], front = 0, rear = 0;
    int j;
    // TODO 访问v结点的操作
    visit[v] = 1;
    rear = (rear + 1) % maxSize;
    que[rear] = v;
    while (front != rear) {
        front = (front + 1) % maxSize;
        j = que[front];
        p = G->adjlist[j].firstarc;
        while (p != (ArcNode *) NULL) {
            if (visit[p->adjvex] == 0) {
                // TODO 访问p->adjvex操作
                visit[p->adjvex] = 1;
                rear = (rear + 1) % maxSize;
                que[rear] = p->adjvex;
            }
            p = p->nextarc;
        }
    }
}
