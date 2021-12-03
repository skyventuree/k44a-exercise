#include <stdio.h>
#include <stdlib.h>

int chusonn(int n) {
    int m;
    if (n < 10) return n;
    else {
        m = chusonn(n / 10);
        if (m < n % 10) return m;
        else return n % 10;
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);    
    printf("So nho nhat: %d", chusonn(abs(n)));
    return 0;
}