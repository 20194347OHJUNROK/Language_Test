#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void get_random();

int main()
{
	get_random();
	get_random();
	get_random();
	get_random();
	
	return 0;
}

void get_random()
{
	static int inited = 0;
	
	if (inited == 0)
	{
		printf("초기화 실행\n");
		srand((unsigned)time(NULL));
		inited = 1;
	}
	else
	{
		printf("%d\n", rand());
	}
}
