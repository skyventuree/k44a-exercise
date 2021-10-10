#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	char pt;
	printf("Nhap a=");
	scanf("%d", &a);
	printf("Nhap b=");
	scanf("%d", &b);
	
	printf("Cho biet phep toan? (+ - * /):");
	scanf(" %c", &pt);

	float ketqua;
	switch (pt) {
		case '+':
			ketqua = a + b;
			break;
		case '-':
			ketqua = a - b;
			break;
		case '*':
			ketqua = a * b;
			break;
		case '/':
			if (b == 0) {
				printf("Xin loi, toi khong the chia cho so 0\n");
				return 1;
			}
			ketqua = a / b;
			break;
		default:
			printf("Phep toan khong hop le!\n");
			return 1;
	}

	printf("Ket qua cua: %d %c %d = %2.f\n", a, pt, b, ketqua);
	return 0;
}
