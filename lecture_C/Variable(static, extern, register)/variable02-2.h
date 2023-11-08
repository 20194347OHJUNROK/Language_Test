#include<time.h>
#define TIME 10000000			// 천만번을 나타내는 메크로 상수

void auto_variable()
{
	clock_t start1 = 0, end1 = 0;
	// clock_t는 long타입이며 clock ticks의 자료를 담고 있는 데이터타입이며 int, double과 같이 
	// clock( )함수의 반환형이다.

	double res1 = 0.0;  // 시간차 저장
	int sum = 0;

	// 시작시간을 저장
	start1 = clock();
	// clock( )함수는 time.h에 존재하는 함수로 프로그램에 의해 CPU가 소비된 시간을 반환해주는 함수


	for (auto long long i = 0; i <= TIME; i++)
	{
		sum += i;
	}

	// 종료시간을 저장
	end1 = clock();

	// 천만번 도는데 걸리는 시간을 저장
	res1 = (end1 - (double)start1) / CLOCKS_PER_SEC;
	// start1의 자료형이 clock_t이므로 double타입으로 강제 변환해준다.
	//	CLOCKS_PER_SEC는 초당 clock ticks의 수를 나타낸 메크로이다. 
	printf("auto변수 사용 소요된 시간(초) : %.16lf\n", res1);

}

void register_variable()
{
	clock_t start2 = 0, end2 = 0;

	double res2 = 0.0;
	int total = 0;

	start2 = clock();

	for (register long long j = 0; j <= TIME; j++)
	{
		total += j;
	}

	end2 = clock();

	res2 = (end2 - (double)start2) / CLOCKS_PER_SEC;

	printf("register 변수 사용 소요된 시간(초) : %.16lf\n", res2);

}