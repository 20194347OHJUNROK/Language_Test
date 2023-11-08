#include<stdio.h>

#define HOR_LINE printf("---------------------------------------------------------------------------------------\n")

int main()
{
	//Q1.
	// ���� 21, 25, 41, 18, 31, 8, 34, 11, 32, 19, 10 ��
	// �����ϴ� �迭�� ���� �� �ʱ�ȭ

	int numbers[] = { 21, 25, 41, 18, 31, 8, 34, 11, 32, 19, 10 };

	// �迭 numbers�� �� ���Һ��� 10 ��ŭ ū ���� ���
	int length = (sizeof(numbers) / sizeof(int));

	for (int i = 0; i < length; i++)
	{
		printf("numbers[%d]+10 = %d\n", i, numbers[i] + 10);
	}
	HOR_LINE;


	// Q2.
	// �迭 numbers�� ���ҵ� �߿��� 20 ���� ū ���ҵ鸸 ���

	for (int i = 0; i < length; i++)
	{
		if (numbers[i] > 20)
		{
			printf("numbers[%d] = %d�̴�.\n", i, numbers[i]);
		}
	}

	HOR_LINE;

	//Q4.
	// �迭 numbers �� ���ҵ��� ����� ���

	double avg;
	int total = 0;

	for (int i = 0; i < length; i++)
	{
		total += numbers[i];
	}
	avg = (double)total / length;

	printf("���� : %d, ��� : %.2f\n", total, avg);

	HOR_LINE;


	//Q4.
	// �迭 numbers�� ���ҵ� �߿��� ���� ū���� ���ҿ�
	// ���� �������� ���Ҹ� ���
	int max=numbers[0];
	int min = numbers[0];

	for (int i = 1; i < length; i++)
	{
		if (max<numbers[i]){max = numbers[i];}
		if (min > numbers[i]){min = numbers[i];}
	}

	printf("MAX = %d, MIN = %d\n", max, min);

	HOR_LINE;

	return 0;
}