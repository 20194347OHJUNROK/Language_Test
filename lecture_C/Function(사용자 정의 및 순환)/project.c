/*
* 함수 프로젝트를 하기위한 순서
: 함수 프로젝트 메뉴얼 작성 ▶ 알고리즘 순서가 포함된 알고리즘 작성 ▶ 알고리즘에 맞게끔 순서도를 그림
  ▶ 함수 간에 관계도를 작성 ▶ 관계도를 기반으로 소스코드를 작성
*/
#include"sonata.h"

int main()
{
	int i = 0;
	int count;

	printf("몇번 생산하실건가요? : ");
	scanf("%d", &count);
	printf("\n");
	printf("\n===소나타 2000cc 와 2400cc 생산시작===\n");
	srand((unsigned) time(NULL));

	for (i = 1; i <= count; i++)
	{
		sonata2000();
		sonata2400();
	}
	printf("\n==소나타 2000cc와 2400cc 생산 완료===\n\n");

	return 0;
}