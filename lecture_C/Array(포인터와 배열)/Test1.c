#include<stdio.h>
#include<string.h>

//Q. 배열 포인터 실습
#define L 20
int input_name(char(*name)[L]);
int dup_chek(char(*name)[L], char* temp, int cnt);
void print_name(char(*name)[L], int cnt);

int main()
{
	char name[10][20] = { ' ' };
	int cnt = input_name(name);
	print_name(name, cnt);

	return 0;
}

int input_name(char(*name)[L])
{
	char temp[L] = " ";
	int cnt = 0;

	while (1)
	{
		printf("%d번째 이름 : ", cnt + 1);
		scanf("%s", temp);


		if (dup_chek(name, temp, cnt))
		{
			printf("@ 이름이 이미 등록되었습니다!\n");
			continue;
		}
		strcpy(name[cnt], temp);
		cnt++;

		if (cnt == 10)
		{
			printf("@ 이름 %d명을 모두 입력하셨습니다.\n\n", cnt);
			break;
		}
	}

	return cnt;
}

int dup_chek(char(*name)[L], char* temp, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		if (strcmp(name[i], temp) == 0)
		{
			return 1;
		}
	}

	return 0;
}

void print_name(char(*name)[L], int cnt)
{
	printf("@ 총 %d명의 이름이 입력되었습니다.\n",cnt);

	for (int i = 0; i < cnt; i++)
	{
		printf("%d번째 이름 : %s\n", i + 1, name[i]);
	}
}