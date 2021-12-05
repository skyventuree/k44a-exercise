#include <stdio.h>

int mangDoiXung(int a[], int n){
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != a[n-1-i]) dem++;
    }
    if(dem == 0) return 1;
    else return 0;
}

int main() {
    int n;
    printf("Nhap so luong mang: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nhap #%d: ", i);
        scanf("%d", &arr[i]);
    }
    
    if (mangDoiXung(arr, n) == 1) printf("La mang doi xung");
    else printf("Khong phai mang doi xung");

    return 0;
}