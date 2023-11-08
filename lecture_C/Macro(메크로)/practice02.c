#include<stdio.h>

// 전역변수
int n1 = 10;
int n2 = 20;

// 두개의 정수 중에서 큰 값을 구하는 함수
int MAX(int n1, int n2)
{
	int max = n1 > n2 ? n1 : n2;

	return max;
}

// 두개의 정수 중에서 작은 값을 구하는 함수
int MIN(int n1, int n2)
{
	int min = n1 < n2 ? n1 : n2;

	return min;
}
// 조건에 따른 값 을 다룰 때는 조건문 보다는 조건연산자가 훨씬 간편하다!!!

int main()
{

	printf("MAX = %d , Min = %d\n", MAX(n1, n2), MIN(n1, n2));

	return 0;
}