#include <stdio.h>

int main(int argc, char *argv[])
{
	int d, m, y, ld;
	printf("Nhap ngay: (dd/mm/yyyy): ");
	scanf("%d/%d/%d", &d, &m, &y);
	
	// Lay tu songaymotthang.c
	switch (m) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			ld = 31;
			break;
		case 4: case 6: case 9: case 11:
			ld = 30;
			break;
		case 2:
			if (y % 400 == 0 || y % 4 == 0 && y & 100 != 0) ld = 29;
			else ld = 28;
			break;
	}

	if (ld < ++d) {
		m++;
		d=1;
	}
	if (m > 12) {
		y++;
		m=1;
	}

	printf("Ngay tiep theo se la: %d/%d/%d.\n", d, m, y);

	return 0;
}
