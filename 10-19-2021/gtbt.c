#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b;
	char bt;
	double result;
	printf("Nhap hai so a va b va bieu thuc (a <bt> b): ");
	scanf("%d %c %d", &a, &bt, &b);
	switch (bt) {
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case 'x':
		case '*':
			result = a * b;
			break;
		case ':':
		case '/':
			if ( b == 0 ) {
				printf("Khong the chia cho 0!\n");
				return 1;
			}
			result = a / b;
			break;
		default:
			printf("Bieu thuc %c khong hop le!\n", bt);
			return 1;
	}
	printf("Ket qua: %d %c %d = %2.f\n", a, bt, b, result);
	return 0;
}
