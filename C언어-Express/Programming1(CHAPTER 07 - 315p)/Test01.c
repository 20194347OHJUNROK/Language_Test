#include<stdio.h>

int main()
{
	int num;
	printf("ī������ �ʱⰪ�� �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (int i = num; i > 0; i--)
	{
		printf("%2d", i);
	}
	// ���Ҹ��� ���ִ� �����
	printf("\a");

	return 0;
}