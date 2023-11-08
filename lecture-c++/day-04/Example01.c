#include <stdio.h>
#include<string.h>
#define LENGTH 80
/*
* 사람을 표현하는 구조체 person
*/

typedef struct person
{
	// 멤버 변수(member Variable)
	char name[LENGTH + 1];
	int age;
}p;

void Print_Person(const p* ptr)
{
	// 간접 멤버 접근 연산자(->)를 이용해, 포인터가 가리키는 구조체 변수의 멤버 변수에 접근
	printf("Name : %s\n", ptr->name);
	printf("Age : %d\n", ptr->age);
}
//----------------------------------------------------------------------------------------------------------------------------------------------

int main()
{
	// 구조체 변수 선언
	p jackson;


	// 구조체 변수 jackson에 값을 저장
	strcpy(jackson.name, "Michael Jackson", LENGTH);
	jackson.age = 25;

	// Print_Person 함수를 이용해 구조체 변수 jackson을 출력
	Print_Person(&jackson);

	return 0;
}