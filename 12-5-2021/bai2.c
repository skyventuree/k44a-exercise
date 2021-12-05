#include <stdio.h>
int soChinhPhuong(int n) {
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            return 1;
        }
        ++i;
    }
    return 0;
}

int main() {
    int n;
    printf("Nhap so luong cua mang: ");
    scanf("%d", &n);

    int arr[n], xh;
    for (int i = 0; i < n; i++)
    {
        printf("Nhap so #%d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n; i++)
    {
        if (soChinhPhuong(arr[i]) == 1) {
            printf("%d la so chinh phuong trong mang!\n", arr[i]);
            xh++;
        }
    }
    printf("Tong cong co %d so chinh phuong!", xh);
    return 0;
}