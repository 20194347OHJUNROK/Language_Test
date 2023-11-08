// 커피 자판기 프로그램 만들어보기
#include<stdio.h>

int coffee_machine(int coffee, char guest);

// 전역변수 선언 및 초기화
int coffee = 0;
char prim[5] = "프림";	// 한글은 비주얼 스튜디오에서는 2바이트로 인식
char sugar[5] = "설탕";
char americano[11] = "아메리카노";
char macchiato[9] = "마끼아또";
char guest = 'A';

int main()
{
	int choice = 0;
	int cnt = 0;

	printf("몇 잔의 커피를 원하십니까? : ");
	scanf("%d", &cnt);
	
	for (int i = 0; i < cnt; i++, guest++)
	{
		printf("%c님, 어떤 커피를 주문하시겠어요? (1: 프림, 2: 설탕, 3: 아메리카노, 4: 마끼아또) : \n",guest);
		scanf_s("%d", &coffee);
		getchar();
		
		choice = coffee_machine(coffee, guest);
		if (choice == -1) { printf("처음부터 다시 시작해주세요!.\n\n"); break; }
	}

	return 0;
}

// 커피의 종류를 분기하는 함수
int coffee_machine(int coffee, char guest)
{
	switch(coffee)
	{
	case 1:
		printf("%c님. 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", prim);
		break;

	case 2:
		printf("%c님. 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", sugar);
		break;

	case 3:
		printf("%c님. 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", americano);
		break;

	case 4:
		printf("%c님. 커피 나왔습니다.\n", guest);
		printf("%s 커피입니다.\n\n", macchiato);
		break;

	default:
		printf("%c님. 주문이 취소되셨습니다.\n", guest);
		return -1;		
		// 주문 취소시 반환값을 -1로 주고 메인함수의 루프를 탈출시켜
		//	재시작 하게끔 한다.
	}
}