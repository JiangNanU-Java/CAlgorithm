
#include<iostream>

using namespace std;


int F1(int n) {
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return F1(n - 1) + F1(n - 2);
}

int F2(int n) {
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 1;

    for (int i = 2; i <= n; i++)
        ans[i] = ans[i - 1] + ans[i - 2];

    int tmp = ans[n];
    delete[] ans;
    return tmp;
}