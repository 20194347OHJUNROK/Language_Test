#include<stdio.h>
void get_int(int* px, int* py)
{
	printf("������ ���� %d\n", *px + *py);
}

int main()
{
	int x, y;
	printf("2���� ������ �Է��Ͻÿ�(�� : 10 20) : ");
	scanf("%d %d", &x, &y);

	get_int(&x, &y);
	return 0;
}