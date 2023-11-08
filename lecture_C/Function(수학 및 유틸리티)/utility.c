/*
* 유틸리티 함수

 (1)exit(int)함수
: 실행 중인 프로세스를 강제로 종료할 때 사용하는 함수
 * 매개변수가 0인 경우에는 오류가 없음을 의미한다.
 * 매개변수가 1인 경우에는 오류가 발생했음을 의미한다.
 * return문과 유사하지만 return문은 함수의 종료를 알리고 호출한 곳으로 값을 돌려주거나
 * 돌려주지 않는경우에 사용한다.
 * exit 함수 보다는 return문을 사용하기를 권장드린다.

 (2)system( )함수
 : 문자열 인수를 직접 운영체제(OS)에 전달하여 명령어를 실행하는 함수
 
 (3)Sleep( )함수
 : CPU 실행을 일시정지(timed waiting)상태로 만든다.
	단, 매개변수로 들어가는 단위가 1/1000초이다.
*/

#include<stdio.h>
#include<stdlib.h>	// system( )함수를 사융하기 위한 헤더파일
#include<conio.h>	// _getch( )함수를 사용하기 위한 헤더파일
#include<windows.h>	// Sleep( ) 함수를 사용하기 위한 헤더파일

int main()
{
	system("title UTILITY 함수 사용 프로그램");

	printf("현재 프로그램이 존재하는 디렉터리 정보 출력\n");
	system("dir");

	printf("아무키나 누르면 프로그램이 종료됩니다.\n");
	printf("입력키 : ");
	_getch();		// 직접형 단일 문자 입력 함수
	system("cls");

	printf("10초후 디렉터리정보를 출력합니다.\n");
	Sleep(10000);	// 10초동안 지연 시간 설정
	system("dir");
	printf("5초후 프로세서를 종료합니다.\n");
	Sleep(5000);	// 5초후 프로세서를 종료하는 시간 설정
	exit(0);

	return 0;
}