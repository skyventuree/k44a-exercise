#include <stdio.h>

float tietkiem(float tienGui, float laiSuat, int thang) {
    for(int i = 1; i <= thang; i++)
        tienGui = tienGui + tienGui * laiSuat / 100;
    return tienGui;
}

int main() {
    float tienGui, laiSuat; 
    int thang;
    printf("Nhap tien gui ");
    scanf("%f", &tienGui);
    printf("Nhap so thang: ");
    scanf("%d", &thang);
    printf("Nhap lai suat: ");
    scanf("%f", &laiSuat);
    printf("Tien nhan %0.f", tietkiem(tienGui, laiSuat, thang));
    return 0;
}