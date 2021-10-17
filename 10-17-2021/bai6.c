#include <stdio.h>

int main(int argc, char *argv[]) {
    int n;
    printf("Nhap so n: ");
    scanf("%d", &n);
    printf("Ket qua la: %d", n * (n + 1) / 2);
    return 0;
}
