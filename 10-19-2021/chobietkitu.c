#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char c, ketqua[12];
	printf("Cho mot ki tu bat ki? \n");
	c = getchar();
	if (c >= '0' && c <= '9') strcpy(ketqua, "so");
	else if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') strcpy(ketqua, "chu cai");
	else strcpy(ketqua, "ki tu khac");
	printf("%c la %s.\n", c, ketqua);
	return 0;
}
