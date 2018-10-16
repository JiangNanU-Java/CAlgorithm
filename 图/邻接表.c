#define maxSize 100
#define NULL -1

// 表结点
typedef struct ArcNode {
    int adjvex;             // 节点位置
    struct ArcNode *nextarc;// 指向下一个顶点
} ArcNode;

// 头结点
typedef struct {
    ArcNode *firstarc;      // 指向第一个顶点
} VNode;

// 图
typedef struct {
    VNode adjlist[maxSize]; // 邻接表
    int n, e;               // 顶点数 边数
} AGragh;