#include<stdio.h>
#include<stdlib.h>		// srand(), rand()함수 사용
#include<time.h>		// time()함수 사용

int sonata2000();
int sonata2400();
// 고유한 값인 차대번호를 반환해주는 함수
int body_num();

char color[5][10] = { "흰색", "검정색", "파란색", "은색", "빨간색" };

int sonata2000()
{
	int engine = 2000;
	static int num = 10000;
	// sonata엔진의 고유번호가 되어야하기때문에 값이 초기화되지않는
	// 정적변수로 선언해야함

	printf("\n 2000cc 소나타 엔진 고유번호 : %d  ", ++num);
	printf("소나타 전체 차대 번호 : %d\n", body_num());
	printf("엔진 : %dcc 파워 엔진,  ", engine);
	printf("색상 : %s\n", color[rand() % 5]);

	return 0;
}
int sonata2400()
{
	int engine = 2400;
	static int num = 20000;
	printf("\n 2400cc 소나타 엔진 고유번호 : %d  ", ++num);
	printf("소나타 전체 차대 번호 : %d\n", body_num());
	printf("엔진 : %dcc 하이브리드 엔진,  ", engine);
	// 인덱스 0~ 4까지의 렌덤한 색상을 출력
	printf("색상 : %s\n", color[rand() % 5]);
	return 0;
}

int body_num()
{
	static int body = 100000;
	return ++body;
}