#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c;
    printf("Nhap do dai 3 canh tam giac: ");
    scanf("%d %d %d", &a, &b, &c);
    double p = (a + b + c) / 2;
    printf("Dien tich tam giac la: %2.f", sqrt(p*(p-a)*(p-b)*(p-c)));
    return 0;
}