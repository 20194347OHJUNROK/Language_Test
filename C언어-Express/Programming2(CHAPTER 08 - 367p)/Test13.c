#include<stdio.h>
int is_multiple(int n, int m);

int main()
{
	int n1, n2;
	int multiple;

	printf("ù��° ������ �Է��Ͻÿ� : ");
	scanf("%d", &n1);
	printf("�ι�° ������ �Է��Ͻÿ� : ");
	scanf("%d", &n2);

	multiple = is_multiple(n1, n2);

	if (multiple)
	{
		printf("%d�� %d�� ����Դϴ�.\n",n1,n2);
	}
	else
	{
		printf("%d�� %d�� ����� �ƴմϴ�.\n", n1, n2);
	}

	return 0;
}

int is_multiple(int n, int m)
{
	return n % m == 0 ? 1 : 0;
}