#include <stdio.h>

int main() {
    int a, b, r;
    printf("Nhap a: ");
    scanf("%d", &a);    
    printf("Nhap b: ");
    scanf("%d", &b);

    while(a % b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    printf("Gia tri cua b = %d", b);
    return 0;
    
}