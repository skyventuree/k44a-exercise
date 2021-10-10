#include <stdio.h>

int main(int argc, char *argv[])
{
	int d1, m1, y1, d2, m2, y2;
	printf("Nhap ngay thu nhat (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d1, &m1, &y1);
	printf("Nhap ngay thu hai (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d2, &m2, &y2);

	if (d1 == d2 && m1 == m2 && y1 == y2) printf("Hai ngay bang nhau.\n");
	else if (y1 < y2 || m1 < m2 || d1 < d2) {
		printf("Ngay thu nhat be hon ngay thu hai.\n");
	}
	else {
		printf("Ngay thu nhat lon hon ngay thu hai.\n");
	}

	return 0;
}
