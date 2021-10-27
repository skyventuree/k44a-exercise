#include <stdio.h>

int main() {
    int n, gt = 1, c;
    printf("Nhap n= ");
    scanf("%d",&n);
    for(int i = n; i > 1; i -= 2) {
        c = n % 2 == 0 ? i : i;
        gt = gt * i;
    }
    printf("Gia tri = %d", gt);
}
