#include <stdio.h>

int main() {
    int n, xh = 0;
    printf("Nhap so luong mang: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap so #%d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0 && arr[i+1] % 2 == 0) xh++;
    }

    printf("Co %d lan hai so chan dung canh nhau trong mang.", xh);
    return 0;
}