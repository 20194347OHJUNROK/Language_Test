#include<stdio.h>

int main()
{
	int x = 0x12345678;
	unsigned char* xp = (char*)&x;

	printf("����Ʈ ���� : ");
	for (int i = 0; i < 4; i++)
		printf("%x ", xp[i]);
	printf("\n");


	return 0;
}