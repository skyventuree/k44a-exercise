#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    int a, b, c;
    printf("Nhap a, b va c: ");
    scanf("%d %d %d", &a, &b, &c);
    float d = pow(b, 2) - 4 * a * c, x, y;
    
    if (d > 0) {
        x = (-b + sqrt(d)) / (2 * a);
        y = (-b - sqrt(d)) / (2 * a);
    }
    else if (d == 0) x = y = -b / (2 * a);
    else {
        printf("Phuong trinh khong co nghiem");
        return 1;
    }
    printf("Nghiem phuong trinh la: %2.f %2.f", x, y);
    
    return 0;
}
