#include <stdio.h>

int main() {
    float diem;
    printf("Nhap diem: ");
    scanf("%f", &diem);
    if (diem >= 5.5 && diem <= 10) printf("Duoc hoc tiep");
    else if (diem < 5.5 && diem >= 4.0) printf("Canh bao hoc vu");
    else if (diem >= 0 && diem < 4.0) printf("Dung hoc");
    else printf("Diem khong hop le!");
    return 0;
}