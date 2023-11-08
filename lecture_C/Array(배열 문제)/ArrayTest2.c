#include<stdio.h>

int main()
{
	// 한 학년의 학생들의 점수
	int scores[3][4] = {
		{30, 50, 70, 90},//1반
		{50, 60, 70, 90},//2반
		{10, 50, 70, 80}//3반
	};
	// 각 반 학생들의 점수의 총합과 평균을 출력
	int rows = sizeof(scores) / sizeof(scores[0]);
	int columns = sizeof(scores[0]) / sizeof(scores[0][0]);

	// 각 반의 점수의 평균을 저장하기 위한배열
	double avg[3] = { 0.0, };
	
	int sum = 0;
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < columns; j++)
		{
			sum += scores[i][j];
		}
		avg[i] = (double)sum / columns;
		printf("%d반의 점수의 총합 : %d\n", (i + 1), sum);
		printf("%d반의 평균 : %.2f\n", (i + 1), avg[i]);
		printf("\n");
	}

// 각 반의 가장 높은 점수와 낮은 점수를 출력

	for (int i = 0; i < rows; i++)
	{
		// i번째 반의 값으로 초기화
		// i번째 반의 첫번째 학생의 점수로 초기화
		int max = scores[i][0];
		int min = scores[i][0];
		for (int j = 1; j < columns; j++)
		{
			if (max < scores[i][j]) { max = scores[i][j]; }
			if (min > scores[i][j]) { min = scores[i][j]; }
		}
			printf("%d반 : ", i + 1);
			printf("High socre = %d , Low score = %d\n", max, min);
	}



	return 0;
}
