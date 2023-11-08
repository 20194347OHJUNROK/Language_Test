#include<time.h>
#define TIME 10000000			// õ������ ��Ÿ���� ��ũ�� ���

void auto_variable()
{
	clock_t start1 = 0, end1 = 0;
	// clock_t�� longŸ���̸� clock ticks�� �ڷḦ ��� �ִ� ������Ÿ���̸� int, double�� ���� 
	// clock( )�Լ��� ��ȯ���̴�.

	double res1 = 0.0;  // �ð��� ����
	int sum = 0;

	// ���۽ð��� ����
	start1 = clock();
	// clock( )�Լ��� time.h�� �����ϴ� �Լ��� ���α׷��� ���� CPU�� �Һ�� �ð��� ��ȯ���ִ� �Լ�


	for (auto long long i = 0; i <= TIME; i++)
	{
		sum += i;
	}

	// ����ð��� ����
	end1 = clock();

	// õ���� ���µ� �ɸ��� �ð��� ����
	res1 = (end1 - (double)start1) / CLOCKS_PER_SEC;
	// start1�� �ڷ����� clock_t�̹Ƿ� doubleŸ������ ���� ��ȯ���ش�.
	//	CLOCKS_PER_SEC�� �ʴ� clock ticks�� ���� ��Ÿ�� ��ũ���̴�. 
	printf("auto���� ��� �ҿ�� �ð�(��) : %.16lf\n", res1);

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

	printf("register ���� ��� �ҿ�� �ð�(��) : %.16lf\n", res2);

}