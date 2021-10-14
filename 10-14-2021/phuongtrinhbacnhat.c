#include <stdio.h>

int main(int argc, char *argv[])
{
	float a, b;
	printf("Nhap hai so theo thu tu a va b:\n");
	scanf("%f %f", &a, &b);
	printf("Vay nghiem x cua a va b la: %2.f\n", -b/a);
	return 0;
}
