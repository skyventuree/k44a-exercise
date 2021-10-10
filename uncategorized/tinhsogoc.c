#include <stdio.h>
#include <math.h>

int main () {
    int deg;
    printf("Nhap so goc: ");
    scanf("%d", &deg);
    float rad = deg * M_PI / 180, gocSin = sin(rad), gocCos = cos(rad), result = pow(gocSin, 2) + pow(gocCos, 2);
    printf("sin(%d)^2 + cos(%d)^2 = %2.f", deg, deg, result);
    return 0;
}