/*
	* memcpy( )함수 : 메모리를 복사하는 함수
	* 함수의 원형 → void * memcpy(void *des, void *src, size_t num);
	: 
	des = 데이터를 복사할 주소, void* 형으로 변한되어서 전달된다.
			주소를 전달해주면 된다.
	 src = 복사할 데이터가 존재하는 위치의 주소, void* 형으로 변환되어서 전달된다.
			주소를 전달해주면 된다.
	 num = 복사할 데이터의 byte수, size_t형으로 전달해주면 된다.

	strcpy( )함수는 문자열의 복사에만 사용이 가능하는 반면,
	memcpy( )함수는 문자열, 정형, 구조체 클래스 등
	모든 내용을 복사할수 있다.
	또한 strcpy 함수는 문자열의 내용을 복사할 뿐만아니라 문자열의 끝인 ('\0')널문자도 함께 복사한다.
	반면에, memcpy 함수는 일반 메모리의 복제를 제공한다.
	즉, memcpy 함수는 복사할 내용에 제한이 없기때문에 사용 용도가 매우 넓다.
*/
#include<stdio.h>
#include<string.h>
#define LENGTH 20


typedef struct
{
	char name[LENGTH];
	int age;
}Member;

void Swap(Member* m1, Member* m2);

int main()
{
	Member m1 = { "홍길동",20 };
	Member m2 = { "강감찬", 27 };


	printf("바꾸기 전\n");
	printf("이름 : %s, 나이 : %d\n", m1.name, m1.age);
	printf("이름 : %s, 나이 : %d\n\n", m2.name, m2.age);

	Swap(&m1, &m2);

	printf("바꾸기 후\n");
	printf("이름 : %s, 나이 : %d\n", m1.name, m1.age);
	printf("이름 : %s, 나이 : %d\n", m2.name, m2.age);

	return 0;
}

void Swap(Member* m1, Member* m2)
{
	Member temp;	
	memcpy(&temp, m1, sizeof(Member));	//m1의 데이터를 temp 주소로 복사 
	memcpy(m1, m2, sizeof(Member));		//m2의 데이터를 m1에 복사
	memcpy(m2, &temp, sizeof(Member));	//temp 주소의 데이터를 m2에 복사
}
