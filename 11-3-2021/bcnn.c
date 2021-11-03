#include <stdio.h>

// su dung UCLN de tinh BCNN
int UCLN(int a,int b){
    if (a % b!=0)
        return UCLN(b, a % b);
    else
        return b;
}

int BCNN(int a,int b){
    return (a * b) / UCLN(a, b);
}

int main(){
    int a, b;
    printf("Nhap (a,b): ");
    scanf("%d %d", &a, &b);
    printf("BCNN(%d, %d)= %d\n", a, b, BCNN(a,b));
    return 0;
}