#include <stdio.h>
#include <stdlib.h>

int* soHocSinh(int soLuong) {
    int *hocSinh = (int*) malloc (sizeof(int) * soLuong);
    for (int i = 0; i < soLuong; i++) {
        printf("Nhap so hoc sinh trong lop #%d: ", i );
        scanf("%d", &hocSinh[i]);
    }
    return hocSinh;
}

void vietFile(data) {
    FILE *fp;
    fp = fopen("sohocsinh.txt", "a");

    if(fp == NULL) {
        printf("file can't be opened\n");
        return; // thoat ham
    }

    fprintf(fp, "%d\n\n", data);

    fclose(fp);
}

void demHS(int soLuong, int* soHSTrongLop, int x) {
    int smallest = 50;
    for (int i = 0; i < soLuong; i++) {
        if (smallest < soHSTrongLop[i]) smallest = i;
        vietFile(soHSTrongLop[i]);
        if (soHSTrongLop[i] > x) printf("Lop #%d co so hoc sinh lon hon so %d voi %d hoc sinh.\n", i, x, soHSTrongLop[i]);
    }
    printf("So lop co hoc sinh nho nhat la %d", smallest);
}


int main(void) {
    int soLuong = 5;
    int* hocSinh = soHocSinh(soLuong);
    vietFile(soLuong);
    demHS(soLuong, hocSinh, 45);
    
    return 0;
}