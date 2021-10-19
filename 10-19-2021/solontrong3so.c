#include <stdio.h>

int main(int argc, char *argv[])
{
	int a, b, c;
	printf("Nhap 3 so theo thu tu.\n");
	scanf("%d %d %d", &a, &b, &c);
	int max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	printf("So lon nhat la: %d\n", max);
	return 0;
}
