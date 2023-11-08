#include<stdio.h>

double AVERAGE(int n1, int n2);

int main()
{
	int n1, n2;
	
	printf("Enter two scores : ");
	scanf("%d %d", &n1, &n2);
	printf("\n");


	printf("The average of %d and %d = %g\n", n1, n2, AVERAGE(n1,n2));


	return 0;
}

// 두개의 정수의 평균을 구하는 함수를 만들어라!!!
double AVERAGE(int n1, int n2)
{
	double average = (double)n1 + n2 / 2;

	return average;

}

// 두개의 정수의 평균을 구하는 함수를 만들어라!!!
//double AVERAGE(double n1, double n2)
//{
//	정수형 인자가 매개변수에 전달될 때
//  자동형 변환으로 인해 실수형으로 변환된다.
//	return (n1+n2)/2;
//
//}