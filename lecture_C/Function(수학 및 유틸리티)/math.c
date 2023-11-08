#include<stdio.h>
#include<math.h> // 수학 함수를 이용하기 위한 표준 라이브러리

/* 수학관련 함수
 ceil( )  함수	: 매개변수로 들어온 double 값을 무조건 올림처리
 floor( ) 함수	: 매개변수로 들어온 double 값을 무조건 내림처리
 fabs( )  함수	: 매개변수로 들어온 값의 절댓값을 출력해주는 함수
 pow( )	  함수	: 매개변수가 2개, 하나는 제곱을 할 대상이 되고 또 하나는 지수(승)이 된다.
				  즉, 제곱값을 구해주는 함수이다.
 sqrt( )  함수	: 매개변수로 들어온 값의 제곱근을 구해주는 함수
*/

int main()
{
	int choice = 0;
	double result, num1, num2 = 0.0;

	do
	{
		printf("1. 올림처리\n2. 내림처리\n3. 절댓값 출력\n4. 제곱값 출력\n5. 제곱근 출력\n0. 프로그램 종료\n");
		printf("번호 선택 : ");
		scanf("%d", &choice);
		printf("\n");


		switch (choice)
		{
		case 1:
			printf("1. 올림처리를 출력하는 프로그램\n");
			printf("올림처리 대상 실수 입력 : ");
			scanf("%lf", &num1);

			result = ceil(num1);
			printf("%lf의 올림처리 결과값 : %lf\n\n", num1, result);
			break;

		case 2:
			printf("2. 내림처리를 출력하는 프로그램\n");
			printf("내림처리 대상 실수 입력 : ");
			scanf("%lf", &num2);

			result = floor(num2);
			printf("%lf의 내림처리 결과값 : %lf\n\n", num2, result);
			break;

		case 3:
			printf("3. 절댓값을 출력하는 프로그램\n");
			printf("실수입력 : ");
			scanf("%lf %lf", &num1,&num2);

			result = fabs(num1 - num2);
			printf("%lf - %lf의 [절댓값] : %lf\n\n", num1, num2, result);
			break;

		case 4:
			printf("4. 제곱값을 출력하는 프로그램\n");
			printf("제곱대상 실수 입력 : ");
			scanf("%lf", &num1);

			printf("지수(승) 입력 : ");
			scanf("%lf", &num2);

			result = pow(num1, num2);
			printf("%lf의 %lf승의 결과값 : %lf\n\n", num1, num2, result);
			break;

		case 5:
			printf("5. 제곱근을 출력하는 프로그램\n");
			printf("제곱근을 구할 실수 입력 : ");
			scanf("%lf", &num1);

			result = sqrt(num1);
			printf("%lf의 제곱근의 결과값 : %lf\n\n", num1, result);
			break;

		case 0:
			printf("프로그램을 종료합니다.\n\n");
			exit(0);

		default :
			printf("선택오류!!! 잘못입력하셨습니다.\n\n");
			continue;
			break;
		}
	} while (1);

	return 0;
}