#include<stdio.h>
#define password 1234
int check();

int main()
{
	for (int i = 0; i < 3; i++)
	{
		if (check() == 0)
			break;
	}
	return 0;
}

int check()
{
	static int cnt=1;
	int pass;

	printf("비밀번호 : ");
	scanf("%d", &pass);

	if (pass == password)
	{
		printf("로그인 성공\n");
		return 0;
	}
	else if(cnt == 3)
	{
		printf("로그인 시도횟수 초과\n");
		return 0;
	}	
	else
	{
		cnt++;
		return 1;
	}
}