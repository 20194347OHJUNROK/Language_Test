#include <stdio.h>
#define LENGTH		100
#define BASE		10

int main()
{
	// �ִ� 100�ڸ� �ڿ����� �Է��� �޾Ƽ�
	// �� ������ ������ ����ϴ� ���α׷��� S�ۼ�

	// �Է¹��� �ڿ����� ������ ���ڿ� �迭
	char natural_number[LENGTH + 1] = { 0, };

	// �� �ڸ� ������ �����ϴ� �迭
	int reminder[BASE] = { 0, };

	printf("Enter a natural number >>> ");
	scanf("%s", natural_number);
	// > 1234
	//	 {'1', '2', '3', '4', '\0'}
	// '\0' �� �ƽ�Ű �ڵ� = 0
	for (int i = 0; natural_number[i] != 0 && i <= LENGTH; i++)
	{
		char c = natural_number[i];
		// '0' = 48
		// '1' = 49
		// ..
		// '9' = 57
		reminder[c - 48]++;
	}
	printf("\n");
	for (int i = 0; i < BASE; i++)
	{
		printf("%d's count = %d\n", i, reminder[i]);
	}
	return 0;
}