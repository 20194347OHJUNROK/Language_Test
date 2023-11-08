#include<stdio.h>
#include<string.h>
// �Լ� ����
void print_scores(int(*scores)[3], int rows, int columns);

void print_average(int(*scores)[3], int rows, int columns);

void print_Subject_Average(int(*scores)[3], int rows, int columns);

int main()
{
// 5�� �л��� 3���� ����(��, ��, ��)�� �����ϱ� ���� �迭�� �����ϰ�
//  �� �л��� ������ �Ʒ��� ���� ������ ����
//		1 : 88 97 67
//		2 : 78 66 90
//		3 : 90 87 75
//		4 : 56 54 100
//		5 : 70 99 76
	char subject[50] = " ����||����||����";
	printf("   %s    \n", subject);
	int scores[5][3] = {
		{88,97,67},
		{78,66,90},
		{90,87,75},
		{56,54,100},
		{70,99,76}
	};

	int rows = sizeof(scores) / sizeof(scores[0]);
	int columns = sizeof(scores[0]) / sizeof(int);

	print_scores(scores, rows, columns);
	printf("----------------------\n");
	print_average(scores, rows, columns);
	printf("----------------------\n");
	print_Subject_Average(scores, rows, columns);

	return 0;
}

// �� �� �л����� ������ ����ϴ� �Լ��� ����
void print_scores(int(*scores)[3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		printf("%d�� : ", i + 1);
			for (int j = 0; j < columns; j++)
		{
				printf("%3d ", scores[i][j]);
		}
			printf("\n");
	}
}


// �л����� �� �� ��� ������ ����ϴ� �Լ��� ����
void print_average(int(*scores)[3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		int total = 0;
		double average;

		printf("%d���� ��� : ",i+1);
		
		for (int j = 0; j < columns; j++)
		{
		total += scores[i][j];
		}
		average = (double)total / columns;
		printf("%.2f\n", average);
	}
}


// �� ���� ��� ������ ����ϴ� �Լ��� ����
void print_Subject_Average(int(*scores)[3], int rows, int columns)
{
	for (int i = 0; i < columns; i++)
	{
		printf("%dst�� ���� ��� : ", i + 1);
		int total = 0;
		double average;
		for (int j = 0; j < rows; j++)
		{
			total += scores[j][i];
		}
		average = (double)total / rows;
		printf("%.2f\n", average);
	}

}