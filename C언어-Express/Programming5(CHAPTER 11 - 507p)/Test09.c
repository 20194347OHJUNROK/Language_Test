#include<stdio.h>
int search(int* a, int size, int search_value);
int main()
{
	int salary[10] = {100, 200, 250, 300, 350, 400, 450, 500, 550, 600};

	printf("salary[10] = {");
	for (int i = 0; i < 10; i++)
	{
		printf("%4d,", salary[i]);
	}
	printf("}\n");

	search(salary, 10, 200);

	return 0;
}

int search(int* a, int size, int search_value)
{
	int i;

	printf("월급이 %d만원인 사람의 인덱스 = ", search_value);
	for (i = 0; i < size; i++)
	{
		if (a[i] == 200)
			printf("%d", i);
	}
	printf("\n");

	return 0;
}