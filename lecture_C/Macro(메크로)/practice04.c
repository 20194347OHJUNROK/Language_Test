#include<stdio.h>

int main()
{
	// ������ ������ �Է¹޾� �� �ڸ��� ������ ����ϴ� �ݺ����� �ۼ�

	int num; 

	printf("Enter an integer : ");
	scanf("%d", &num);
	printf("\n");


	// ���� num�� k��° �ڸ�
	// num���� (10^(k-1))�� ���� ���� 1�� �ڸ��� ������.
	for (int k = 1; k <= num; k *= 10)
	{
		int digit = (num / k) % 10;

		printf("%d�� �ڸ� : %d\n", k, digit);
	}
	printf("\n");


	// num�� �ִ��ڸ������� 1�� �ڸ����� ���

	// num �� �ִ��ڸ����� ���ض�
	int max_digit = 1;
	
	for (int i = 10; i<= num; i*=10)
	{
		max_digit *= 10;
	}

	// �ִ� �ڸ����� �̿��Ͽ� 1�� �ڸ������� �ڸ����� 10�������� ǥ��
	for (int k = max_digit; k >= 1; k /= 10)
	{
		int digit = (num / k) % 10;

		printf("%d�� �ڸ� : %d\n", k, digit);
	}
	printf("\n");



	return 0;
}