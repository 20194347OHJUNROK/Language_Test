#include<stdio.h>
void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main()
{
	int x, y;

	printf("�� ���� ������ ū������� �Է��Ͻÿ� : ");
	scanf("%d %d", &x, &y);

	get_sum_diff(x, y, &x, &y);

	printf("���ҵ��� �� = %d\n", x);
	printf("���ҵ��� �� = %d\n", y);

	return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
	*p_sum = x + y;
	*p_diff = x - y;
}