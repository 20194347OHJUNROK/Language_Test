#include<stdio.h>

int main()
{
	int input;
	do
	{
		printf("막대의 높이(종료 : -1) : ");
		scanf("%d", &input);
		

		for (int i = 0; i < input; i++)
		{
			printf("*");
		}
		printf("\n");
		
	} while (input!=-1);


	return 0;
}