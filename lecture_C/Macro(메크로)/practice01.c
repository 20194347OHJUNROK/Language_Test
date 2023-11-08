#include<stdio.h>
// 매크로 함수(macro function) 정의
//  → 연산자 우선순위 문제가 발생하지 않도록
//		1. 전체 표현식을 괄호로 묶어야 한다.
//		2. 각 인자를 괄호로 묶어야 한다.

//메크로 함수를 정의하여 제곱수를 구하라
#define SQUARE(x) ((x)*(x))

// 메크로 함수를 정의하여 최댓값과 최솟값을 구하라
#define MAX(x,y) ((x)>(y)?(x):(y))
#define MIN(x,y)	((x)<(y)?(x):(y))

int main()
{
		int n1 = 31, n2 = 61, n3 = 112;
		// 정의된 매크로 함수를 통해 3개의 변수 중에
		// 가장 큰 값과 가장 작은 값이 출력되도록 명령어를 작성
		int max = MAX(MAX(n1, n2), n3);
		printf("MAX = %d\n", max);

		int min = MIN(MIN(n1, n2), n3);
		printf("MIN= %d\n", min);

	return 0;
}

