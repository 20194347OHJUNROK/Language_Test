#include<stdio.h>

#define HOR_LINE printf("---------------------------------------------------------------------------------------\n")

int main()
{
	//Q1.
	// 정수 21, 25, 41, 18, 31, 8, 34, 11, 32, 19, 10 을
	// 저장하는 배열을 선언 및 초기화

	int numbers[] = { 21, 25, 41, 18, 31, 8, 34, 11, 32, 19, 10 };

	// 배열 numbers에 각 원소보다 10 만큼 큰 값을 출력
	int length = (sizeof(numbers) / sizeof(int));

	for (int i = 0; i < length; i++)
	{
		printf("numbers[%d]+10 = %d\n", i, numbers[i] + 10);
	}
	HOR_LINE;


	// Q2.
	// 배열 numbers의 원소들 중에서 20 보다 큰 원소들만 출력

	for (int i = 0; i < length; i++)
	{
		if (numbers[i] > 20)
		{
			printf("numbers[%d] = %d이다.\n", i, numbers[i]);
		}
	}

	HOR_LINE;

	//Q4.
	// 배열 numbers 의 원소들의 평균을 출력

	double avg;
	int total = 0;

	for (int i = 0; i < length; i++)
	{
		total += numbers[i];
	}
	avg = (double)total / length;

	printf("총합 : %d, 평균 : %.2f\n", total, avg);

	HOR_LINE;


	//Q4.
	// 배열 numbers의 원소들 중에서 가장 큰값인 원소와
	// 가장 작은값인 원소를 출력
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