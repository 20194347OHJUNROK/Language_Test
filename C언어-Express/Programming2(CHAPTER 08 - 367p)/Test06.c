#include<stdio.h>
#include<math.h>
int even(int n);
int absolute(int n);
int sign(int n);

int main()
{
	int num;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	even(num);
	absolute(num);
	sign(num);

	return 0;

}
int even(int n)
{
	if (n % 2 == 0) { printf("even()�� ��� : ¦��\n"); }
	else { printf("even()�� ��� : Ȧ��\n"); }

	return 0;
}

int absolute(int n)
{
	printf("absolute()�� ��� : %d\n", (int)fabs(n));
	return 0;
}

int sign(int n)
{
	if (n > 0)
	{
		printf("sign()�� ��� : ���\n");
	}
	else if (n < 0)
	{
		printf("sign()�� ��� : ����\n");
	}
	else
	{
		printf("sign()�� ��� : %d\n",n);
	}
	return 0;
}