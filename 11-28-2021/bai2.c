#include <stdio.h>

int ucln(int a, int b) {
    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }
    return a;
}

int main() {
    int a, b;
    printf("Nhap hai so: ");
    scanf("%d %d", &a, &b);
    printf("UCLN: %d", ucln(a, b));
    return 0;
}