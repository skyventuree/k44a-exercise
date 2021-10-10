#include <stdio.h>

int main () {
    // take value from user
    int dai, rong;
    printf("Nhap dai va rong tuong ung: ");
    scanf("%d %d", &dai, &rong);
    
    // calculate them 
    float chuVi, dienTich;
    chuVi = ( dai + rong ) * 2;
    dienTich = dai * rong;

    // print out final result
    printf("Chu vi: %2.f, dien tich: %2.f", chuVi, dienTich);

    return 0; // Return exit on success. (ANSI C 89 Standard) 
}