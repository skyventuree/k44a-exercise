#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, res = 0, i = 1;
	char p;
	printf("Nhap n: ");
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		int resp = 1;
		for (int j = 1; j <= i; j++) resp *= j;
		if (i % 2 == 0) res -= resp;
		else res += resp;
	}
	printf("Ket qua la: %d\n", res);
	return 0;
}
