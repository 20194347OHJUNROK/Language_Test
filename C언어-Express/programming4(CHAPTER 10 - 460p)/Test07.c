#include<stdio.h>
#define R 3
#define C 10

int main()
{
	int arr[R][C] = { 0 };
	int i, num;
	for (i = 0; i < C; i++)
	{
		arr[0][i] = i + 1;
		arr[1][i] = (i + 1) * (i + 1);
		arr[2][i] = (i + 1) * (i + 1) * (i + 1);
	}
		
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &num);

	for (i = 0; i < C; i++)
	{
		if (arr[2][i] == num)
			printf("%d�� ���������� %d\n", num, arr[0][i]);
		else if (arr[1][i] == num)
			printf("%d�� �������� %d\n", num, arr[0][i]);
	}
	

	return 0;
}