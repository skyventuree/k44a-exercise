#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("So khong trong day Fibonaci");
        return 1;
    } 
    else if (n == 1) {
        printf("So co trong day Fibonaci");
        return 0;
    }
    else {
        int f1 = 1, f2 = 1, f3 = f1 + f2;
        for (; f3 < n; f3++) {
            f1 = f2;
            f2 = f3;
            f3 = f1 + f2;
            if (f3 == n) {
                printf("So co trong day Fibonaci");
                return 0;
            }
        }
    }
    printf("So khong co trong day Fibonaci");
    return 1;
}