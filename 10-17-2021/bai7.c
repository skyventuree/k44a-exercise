#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int r, h;
    printf("Nhap ban kinh va chieu cao: ");
    scanf("%d %d", &r, &h);
    float Sxq = 2 * M_PI * r * h, Stp = 2 * M_PI * r * (r + h), V = M_PI * pow(r, 2) * h;
    printf("Ket qua tuong ung la:\n");
    printf("Sxq = %2.f\nStp = %2.f\nV = %2.f", Sxq, Stp, V);
    return 0;
}