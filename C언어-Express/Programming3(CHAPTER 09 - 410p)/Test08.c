#include<stdio.h>
int get_digit(int x)
{
	static int cnt = 1;
	if (x / 10 != 0)
	{
		get_digit(x / 10);
		cnt++;
	}
	return cnt;
}

int main()
{
	int integer;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &integer);

	printf("�ڸ����� ���� : %d\n" ,get_digit(integer));
	return 0;
}