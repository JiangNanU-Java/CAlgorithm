#include<stdio.h>

void change(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int global = 0;

int rect(int a, int b) {
    static int count = 0;
    count++;
    global++;
    printf("%d,%d\n", count, global);
}

int main() {
    int a =  0;
    int b = 999;

    while (a++ < 4) {
        rect(a, b);
    }
}