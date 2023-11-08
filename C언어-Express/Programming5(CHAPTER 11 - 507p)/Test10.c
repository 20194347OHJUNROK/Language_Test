#include<stdio.h>
// �ִ������� ���ϴ� �Լ�
int get_gcd(int x, int y);
// �ּҰ������ ���ϴ� �Լ�
void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd);

int main()
{
	int n1, n2;
	int lcm, gcd;

	printf("�ΰ��� ������ �Է��Ͻÿ� : ");
	scanf("%d %d", &n1, &n2);

	get_gcd(n1, n2);
	get_lcm_gcd(n1, n2, &lcm, &gcd);

	printf("�ּҰ������ %d�Դϴ�.\n", lcm);
	printf("�ִ������� %d�Դϴ�.\n", gcd);

	return 0;
}

int get_gcd(int x, int y)
{
	while (y != 0)
	{
		int a = x % y;
		x = y;
		y = a;
	}
	return x;
}

void get_lcm_gcd(int x, int y, int* p_lcm, int* p_gcd)
{
	*p_gcd = get_gcd(x, y);
	*p_lcm = (x * y) / *p_gcd;
}