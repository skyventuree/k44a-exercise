#include <stdio.h>

int demso(int x, int n, int arr[]) {
    int xh = 0;
    for (int i = 0; i <= n; i++)
    {
        if (arr[i] == x) xh++;   
    }
    return xh;
}

int main() {
    int n, x;

    printf("Nhap so mang: ");
    scanf("%d", &n);
    printf("Nhap so x can tim trong mang: ");
    scanf("%d", &x);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap so mang #%d: ", i);
        scanf("%d", &arr[i]);
    }


    printf("Co %d lan xuat hien so x:%d trong mang.", demso(x, n, arr), x);
    return 0;
}