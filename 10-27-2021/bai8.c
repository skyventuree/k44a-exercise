#include <stdio.h>

void sohoanthien(){
    int sum = 0;
    for(int i=1; i <= n/2; i++){if(n%i==0) sum+=i;}
    if(sum == n) printf("%d\n", n);
}

int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
	for (int i = 0; i <= n; i++) sohoanthien(i);
    return 0;
}
