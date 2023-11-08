#include<stdio.h>
/*
2중 포인터
  포인터 변수를 저장하기위해 사용한다.
  주소를 저장하는 공간을 참조하기 때문에
  산술 연산자로 증감을 하게 되면 메모리 주소의 크기인 8byte 만큼 증감한다.
	int** pArr3 = arr;
	printf("pArr3   -> %p\n", pArr3);
	printf("pArr3+1   -> %p\n", pArr3+1);
*/
int main()
{
	// 포인터 배열 선언 및 초기화
	const char* season[4] = { "Spring", "Summer", "Fall", "Winter" };
	char c = 'F';
	char* pt = NULL;
	char** ppt = NULL;

	pt = &c;
	ppt = &pt;

	printf("일반 변수 c의 주소값 : %u\n", &c);
	printf("싱글 포인터 pt가 가지고있는 주소값: %u\n", pt);
	printf("싱글 포인터 &pt의 주소값: %u\n", &pt);
	printf("더블 포인터  ppt가 가지고있는 주소값 : %u\n", ppt);
	printf("더블 포인터  *ppt가 가지고있는 주소값 : %u\n", *ppt);
	printf("더블 포인터  &ppt의 주소값 : %u\n", &ppt);
	printf("--------------------------------------------------\n\n");


	printf("일반 변수 c의 값 : %c\n", c);
	printf("싱글 포인터 *pt가 가리키는 값: %c\n", *pt);
	printf("더블 포인터  **ppt가 가리키는 값: %c\n", **ppt);
	printf("--------------------------------------------------\n\n");

	// pt = season;
	// 포인터 배열 season은 주소의 주소값이므로 싱글포인터 pt에 대입하면 경고가 발생한다.
	ppt = season;
	
	printf("포인터 배열 season의 주소값 : %u\n", season);
	// → printf("포인터 배열 season[0]의 주소값 : %u\n", &season[0]); 와 동일(시작 주소를 가짐)
	printf("이중 포인터 ppt가 가지고있는 주소값 : %u\n", ppt);
	printf("포인터 배열 season의 총 바이트 수 : %zdbyte\n", sizeof(season));
	printf("이중 포인터 ppt의 총 바이트 수 : %zdbyte\n\n", sizeof(ppt));

	for (int i = 0; i < 4; i++)
	{
		printf("%d번째 배열 요소 출력 : %s\n", i, *(ppt + i));
		printf("%d번째 배열 요소의 주소값 : %u\n\n", i, (ppt + i));

	}


	return 0;
}


