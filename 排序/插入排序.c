// 插入排序
void InsertSort(int R[], int n) {
    int i, j;
    int temp;
    for (i = 1; i < n; ++i) {
        temp = R[i];
        j = i - 1;
        while (j >= 0 && temp < R[j]) {
            R[j + 1] = R[j];
            --j;
        }
        R[j + 1] = temp;
    }
}