// 选择排序
void SelectSort(int R[], int n) {
    int i, j, k;
    int temp;
    for (i = 0; i < n; ++i) {
        k = i;
        for (j = i + 1; j < n; ++j) {
            if (R[k] > R[j]) {
                k = j;
            }
        }
        temp = R[i];
        R[i] = R[k];
        R[k] = temp;
    }
}
