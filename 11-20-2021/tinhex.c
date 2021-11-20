#include <stdio.h>

int main() {
    int x;
    double ex = 0, lt = 1, gt = 1, n = 1;
    printf("Nhap x: ");
    scanf("%d", &x);

    do {
        ex = ex + lt / gt;
        n++;
        lt *= x;
        gt *= n;
        
    } while(lt/gt >= 0.00001);
    printf("Gia tri EX: %.2f", ex);

    return 0;
}