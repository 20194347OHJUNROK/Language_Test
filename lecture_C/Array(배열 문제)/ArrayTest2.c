#include<stdio.h>

int main()
{
	// �� �г��� �л����� ����
	int scores[3][4] = {
		{30, 50, 70, 90},//1��
		{50, 60, 70, 90},//2��
		{10, 50, 70, 80}//3��
	};
	// �� �� �л����� ������ ���հ� ����� ���
	int rows = sizeof(scores) / sizeof(scores[0]);
	int columns = sizeof(scores[0]) / sizeof(scores[0][0]);

	// �� ���� ������ ����� �����ϱ� ���ѹ迭
	double avg[3] = { 0.0, };
	
	int sum = 0;
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			sum += scores[i][j];
		}
		avg[i] = (double)sum / columns;
		printf("%d���� ������ ���� : %d\n", (i + 1), sum);
		printf("%d���� ��� : %.2f\n", (i + 1), avg[i]);
		printf("\n");
	}

// �� ���� ���� ���� ������ ���� ������ ���

	for (int i = 0; i < rows; i++)
	{
		// i��° ���� ������ �ʱ�ȭ
		// i��° ���� ù��° �л��� ������ �ʱ�ȭ
		int max = scores[i][0];
		int min = scores[i][0];
		for (int j = 1; j < columns; j++)
		{
			if (max < scores[i][j]) { max = scores[i][j]; }
			if (min > scores[i][j]) { min = scores[i][j]; }
		}
			printf("%d�� : ", i + 1);
			printf("High socre = %d , Low score = %d\n", max, min);
	}



	return 0;
}
