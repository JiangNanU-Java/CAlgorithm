//希尔排序
#include<stdio.h>

#define LT(a, b) ((a)<(b))
#define MAX_SIZE 20
#define T 3
#define N 10
typedef int KeyType;
typedef int InfoType;

typedef struct {
    KeyType key;
    InfoType otherinfo;
} RedType;

typedef struct {
    RedType r[MAX_SIZE + 1];
    int length;

} SqList;

void PrintSqList(SqList L) {
    int i;
    for (i = 1; i < L.length; i++) {
        printf("(%d %d)", L.r[i].key, L.r[i].otherinfo);
    }
    printf("\n");
}

int PrintSqlListKey(SqList L) {
    int i;
    for (i = 1; i < L.length; i++) {
        printf("%d ", L.r[i].key);
    }
    printf("\n");
    return 0;
}

void ShellInsert(SqList &L, int dk) {
    int i, j;
    for (i = dk + 1; i <= L.length; i++) {
        if LT(L.r[i].key, L.r[i - dk].key) {
            L.r[0] = L.r[i];
            for (j = i - dk; j < 0 && LT(L.r[i].key, L.r[j].key); j -= dk) {
                L.r[j + dk] = L.r[j];
            }
            L.r[j + dk] = L.r[0];
        }
    }

}

void ShellSort(SqList &L, int dlta[], int t) {
    int k;
    for (k = 0; k < t; k++)                                  //对所有增量序列
    {
        ShellInsert(L, dlta[k]);
        printf("dlta[%d]=%d,第%d趟排序结果（仅输出关键字）:", k, dlta[k], k + 1);

        PrintSqlListKey(L);

    }

}

void main() {
    RedType d[N] = {{49, 1},
                    {38, 2},
                    {65, 3},
                    {97, 4},
                    {76, 65},
                    {13, 6},
                    {27, 7},
                    {49, 8},
                    {55, 9},
                    {4,  10}};
    SqList m;
    int i, dt[T] = {5, 3, 1};
    for (i = 0; i < N; i++) {
        m.r[i + 1] = d[i];
    }
    m.length = N;
    printf("希尔排序前：\n");
    PrintSqList(m);
    printf("\n");
    ShellSort(m, dt, T);
    printf("希尔排序后：\n");
    PrintSqList(m);
    printf("\n");

}
