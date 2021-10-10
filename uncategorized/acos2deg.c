#include <stdio.h>
#include <math.h>

int main () {
    float gocCos;
    printf("Nhap so cos cua goc: ");
    scanf("%f", &gocCos);
    float rad = acos(gocCos), deg = rad * 180 / M_PI;
    printf("arccos(%2.f) = %2.f", rad, deg);
    return 0;
}