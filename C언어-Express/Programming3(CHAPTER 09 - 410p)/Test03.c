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

	printf("��й�ȣ : ");
	scanf("%d", &pass);

	if (pass == password)
	{
		printf("�α��� ����\n");
		return 0;
	}
	else if(cnt == 3)
	{
		printf("�α��� �õ�Ƚ�� �ʰ�\n");
		return 0;
	}	
	else
	{
		cnt++;
		return 1;
	}
}