// 冒泡排序
void BubbleSort(int R[], int n) {
    int i, j, flag, temp;
    for (i = 0; i < n; i++) {
        flag = 0;

        for (j = 1; j < n - i; j++) {
            if (R[j - 1] > R[j]) {
                temp = R[j - 1];
                R[j - 1] = R[j];
                R[j] = temp;
                flag = 1;
            }
        }

        if (flag == 0)
            return;
    }
}
