#include<stdio.h>
//Q. 함수 포인터의 배열 실습
int hap(int x, int y);
int minus(int x, int y);
int mul(int x, int y);
int div(int x, int y);

int main()
{
	int(*ptr[4])(int, int) = { hap,minus,mul,div };
	/*
		아래와 같은 경우에는 함수 포인터 변수! 같은 경우에는 상관이 없으나,
		함수 포인터의 배열 같은 경우에는 배열이 포인터 상수이기 때문에
		아래 코드는 에러가 발생한다.
		int(*ptr[4])( ) = NULL;			// NULL값으로 초기화
		ptr = { hap, minus, mul, div };
	*/

	printf("ptr의 총 바이트 수 : %d\n\n", sizeof(ptr));
	printf("ptr의 방이 연속적으로 할당이 되어있는지 검사\n");
	for (int i = 0; i < 4; i++)
	{
		printf("ptr[%d]번째 방의 주소 : %u\n",i, &ptr[i]);
	}
	printf("-----------------------------------------------------------\n");
	

	int choice;
	int result;
	int a, b;

re:
	printf("\nMenu : 0.덧셈   1.뺄셈   2.곱셈   3.나눗셈   4.나가기\n\n");
	printf("번호를 선택해주세요 : ");
	scanf("%d", &choice);

	while (1)
	{
		if (choice < 0 || choice>4)
		{
			printf("선택 오류!\n");
			printf("다시 입력해주세요.\n\n");
			goto re;
		}
		else if (choice == 4) { break; }
		else
		{
			printf("두개의 정수를 입력해주세요 : ");
			scanf("%d %d", &a, &b);
			// 사용자가 입력한 값을 인덱스를 통하여 함수를 호출
			// → 아래의 코드를 사용함으로써 코드의 간결화(분기문 if~else문 줄어듦)가 이루어진다.
			result = ptr[choice](a, b);
			printf("결과값 : %d\n\n", result);
			goto re;
		}

	}
	printf("프로그램을 종료합니다.\n");

	return 0;
}

int hap(int x, int y) { return x + y; }
int minus(int x, int y) { return x - y; }
int mul(int x, int y) { return x * y; }
int div(int x, int y) { return x / y; }