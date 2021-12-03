#include <stdio.h>

int ucln(int a, int b) {
    int r;
    while(a % b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return b;
}

int main() {
    int a, b;
    printf("Nhap a, b: ");
    scanf("%d %d", &a, &b);
    printf("UCLN: %d", ucln(a, b));    
    return 0;
}