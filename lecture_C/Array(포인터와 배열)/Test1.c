#include<stdio.h>
#include<string.h>

//Q. �迭 ������ �ǽ�
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
		printf("%d��° �̸� : ", cnt + 1);
		scanf("%s", temp);


		if (dup_chek(name, temp, cnt))
		{
			printf("@ �̸��� �̹� ��ϵǾ����ϴ�!\n");
			continue;
		}
		strcpy(name[cnt], temp);
		cnt++;

		if (cnt == 10)
		{
			printf("@ �̸� %d���� ��� �Է��ϼ̽��ϴ�.\n\n", cnt);
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
	printf("@ �� %d���� �̸��� �ԷµǾ����ϴ�.\n",cnt);

	for (int i = 0; i < cnt; i++)
	{
		printf("%d��° �̸� : %s\n", i + 1, name[i]);
	}
}