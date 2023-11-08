#include <stdio.h>

int main()
{
	/*
	* 배열(Array)
	- 자료형이 같은 저장 공간들의 집합
	- 즉, 다수의 변수를 하나의 타입으로 정의
	- 변수를 자동차라고 한다면 배열은 기차라고 생각해보자!

	* 배열과 관련된 용어

	- 배열의 원소(item)	 : 배열에 포함된 각 저장 공간
	- 배열의 인덱스(index) : 배열의 원소에 부여되는 정수형 번호
							   0 부터 시작해서 1씩 증가하는 정수
	- 배열의 크기(length)    : 배열에 포함된 원소(저장 공간)들의 개수


	* 배열의 선언과 초기화

	  초기화 할 때는 배열의 크기를 지정하지 않아도
	  원소의 개수만큼 배열의 크기가 지정된다.
	
		int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int numbers2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };


	* 배열을 다루기 위해서는 원소(item)에 접근을 할 수 있어야 한다.	
	  → 배열의 식별자와 인덱스 연산자([])를 통해 원소에 접근
	  → numbers[index] : index 위치한 원소에 접근
		printf("numbers[0] = %d\n", numbers[0]);

	* 배열의 원소에 새로운 값을 대입
	printf("numbers[3] = %d\n", numbers[3]);
	numbers[3] = 100;
	printf("numbers[3] = %d\n", numbers[3]);
	printf("\n");
	
	--------------------------------------------------------------------------------------

	* 배열의 크기(length)
	  - sizeof 연산자 : 자료형이나 변수 등에 할당된 저장 공간의 크기(단위:byte)
	  - (배열에 할당된 저장 공간의 크기) / (자료형의 크기) = 원소의 개수
		printf("sizeof(int) = %d\n", sizeof(int));
		- int 형의 크기 = 4byte

		printf("sizeof(int) = %lld\n", sizeof(numbers[0]));
		- numbers[0]의 크기 = 4byte

		printf("sizeof(int) = %lld\n", sizeof(numbers));
		numbers의 크기 = 20byte = int 형의 크기 * 원소의 개수
							   = 4byte * 5
							   = 20byte

	* 배열 numbers의 크기(length)
		int length = sizeof(numbers) / sizeof(int);
		printf("length of numbers = %d\n", length);

		int length2 = sizeof(numbers2) / sizeof(int);
		printf("length of numbers2 = %d\n", length2);
		printf("\n");
	

	* 인덱스의 범위는 제한이 되어있다.(인덱스는 0부터 시작한다.)
	  배열의 크기를 10으로 설정했다면 인덱스는 1부터 시작하는것이아니라 (0 ~ length-1)까지 시작한다.
	  또한, 배열의 인덱스(크기)에는 변수나, 음수, 실수값이 들어갈수없고 정수형값이나 메크로 상수만 들어갈수있다.
	  - 0 <= index < length
	  - 0 <= index <= length-1

	 numbers[10] = 100;			// compile error

	--------------------------------------------------------------------------------------------

	 배열의 모든 원소에 차례대로 접근
	 각 원소에 접근하는데 필요한 것은 정수형태의 인덱스

	printf("numbers2[0] = %d\n", numbers2[0]);
	printf("numbers2[1] = %d\n", numbers2[1]);
	printf("...\n");
	printf("numbers2[11] = %d\n", numbers2[11]);
	printf("numbers2[12] = %d\n", numbers2[12]);
	printf("\n");

	인덱스가 0 에서부터 length 까지 1씩 증가하는 반복문을 이용하여
	 각 원소에 접근이 가능하다.

	for (int i = 0; i < length2; i++)
	{
		printf("numbers2[%2d] = %2d\n", i, numbers2[i]);
	}
	printf("\n");

	반복문을 이용해서 배열의 모든 원소를 역순으로 출력
	for (int i = length2-1; i >= 0; i--)
	{
		printf("numbers2[%2d] = %2d\n", i, numbers2[i]);
	}
	printf("\n");

	return 0;
}

*/