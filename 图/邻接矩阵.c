// 邻接矩阵

#define maxSize 100;

typedef struct {
    int no; // 顶点编号
} VertexType;

typedef struct {
    int edges[maxSize][maxSize];
    int n, e;
    VertexType vex[maxSize];
} MGraph;