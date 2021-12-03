#include <stdio.h>

const char* sohoanthien(int n){
    int sum = 0;
    for (int i=1 ; i <= n/2; i++){
        if(n % i == 0) sum += i;
    }
    if (sum == n) return "la";
    return "khong phai la";
}
int main(){
    for (int i = 0; i <= 1000; i++)
        printf("%d %s so hoan thien\n", i, sohoanthien(i));
    return 0;
}