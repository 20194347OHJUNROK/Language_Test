// 단위변환 계산기를 만들어보자

#include<stdio.h>
#define MILE 0.621371		// 속도를 표현하는 단위
#define LB	2.204623		// 무게를 표현하는 단위

// 함수 선언(원형)
void km_mile(double swap);
void kg_lb(double swap);

int main()
{
	char op = ' ';
	double input = 0.0;

	do
	{
		printf("A. km/h를 mile/h로 환산하는 프로그램\n");
		printf("B. kg를 lb로 환산하는 프로그램\n");
		printf("Q. 프로그램 종료.\n");
		
		printf("선택 : ");
		scanf("%c", &op);
		getchar();

		if (op == 'A' || op == 'a')
		{
			printf("A. km/h를 mile/h로 환산하는 프로그램\n");
			printf("속도(km/h)를 입력하세요 : ");
			scanf("%lf", &input);
			km_mile(input);
			getchar();
		}
		else if (op == 'B' || op == 'b')
		{
			printf("B. kg를 lb로 환산하는 프로그램\n");
			printf("무게(kg)를 입력하세요 : ");
			scanf("%lf", &input);
			kg_lb(input);
			getchar();
		}
		else if (op == 'Q' || op == 'q')	// 탈출 코드
		{
			printf("프로그램을 종료합니다.\n");
			break;
		}
		else								// 에러 코드
		{
			printf("입력오류!!!\n");
			printf("다시 입력해주세요.\n\n");
			continue;
		}
	} while (1);

	return 0;
}
void km_mile(double swap)
{
	float result = swap * MILE;
	printf("속도 %.5f km/h는 %.5f mile/h입니다.\n", swap, result);
	printf("성공적으로 환산을 수행하였습니다.\n\n");
}

void kg_lb(double swap)
{
	float result = swap * LB;
	printf("무게 %.5f kg은 %.5f lb입니다.\n", swap, result);
	printf("성공적으로 환산을 수행하였습니다.\n\n");
}
