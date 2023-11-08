#include<stdio.h>
int add(int *a, int *b);
int sub(int *a, int *b);
int mul(int *a, int *b);
int div(int *a, int *b);

int main()
{
	int n1, n2;
	char input;
	while (1)
	{
		printf("연산을 입력하시오 : ");
		scanf("%d %c %d", &n1, &input, &n2);
		
		switch (input)
		{
		case '+':
			add(&n1, &n2);
			break;
		case '-':
			sub(&n1, &n2);
			break;
		case '*':
			mul(&n1, &n2);
			break;
		case '/':
			div(&n1, &n2);
			break;
		default:
			printf("잘못입력!\n");
			printf("다시 입력해주세요.\n\n");
			getchar();
			break;
		}
	}

	return 0;
}
int add(int* a, int* b)
{
	static int count = 1;
	printf("덧셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %d\n\n", *a + *b);
	count++;
	return 0;
}
int sub(int *a, int *b)
{
	static int count = 1;
	printf("뺄셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %d\n\n", *a - *b);
	count++;
	return 0;
}
int mul(int *a, int *b)
{
	static int count = 1;
	printf("곱셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %d\n\n", *a * *b);
	count++;
	return 0;
}
int div(int *a, int *b)
{
	static int count = 1;
	printf("나눗셈은 총 %d번 실행되었습니다.\n", count);
	printf("연산결과 : %d\n\n", *a / *b);
	count++;
	return 0;
}