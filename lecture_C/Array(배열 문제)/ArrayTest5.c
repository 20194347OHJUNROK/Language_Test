#include<stdio.h>
#include<string.h>
// 함수 선언
void print_scores(int(*scores)[3], int rows, int columns);

void print_average(int(*scores)[3], int rows, int columns);

void print_Subject_Average(int(*scores)[3], int rows, int columns);

int main()
{
// 5명 학생의 3개의 점수(국, 영, 수)를 저장하기 위한 배열을 생성하고
//  각 학생의 점수를 아래와 같이 저장한 다음
//		1 : 88 97 67
//		2 : 78 66 90
//		3 : 90 87 75
//		4 : 56 54 100
//		5 : 70 99 76
	char subject[50] = " 국어||수학||영어";
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

// 각 반 학생들의 점수를 출력하는 함수를 정의
void print_scores(int(*scores)[3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		printf("%d반 : ", i + 1);
			for (int j = 0; j < columns; j++)
		{
				printf("%3d ", scores[i][j]);
		}
			printf("\n");
	}
}


// 학생들의 각 반 평균 점수를 출력하는 함수를 정의
void print_average(int(*scores)[3], int rows, int columns)
{
	for (int i = 0; i < rows; i++)
	{
		int total = 0;
		double average;

		printf("%d반의 평균 : ",i+1);
		
		for (int j = 0; j < columns; j++)
		{
		total += scores[i][j];
		}
		average = (double)total / columns;
		printf("%.2f\n", average);
	}
}


// 각 과목별 평균 점수를 출력하는 함수를 정의
void print_Subject_Average(int(*scores)[3], int rows, int columns)
{
	for (int i = 0; i < columns; i++)
	{
		printf("%dst의 과목 평균 : ", i + 1);
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