#include<stdio.h>

// ��ũ�� ���
#define BASE	10

int main()
{
	// ������ ���� ������ �Է��� �ް�
	// �� ���ڰ� ����� ���

	// >>> 680185772
	//  0�� ���� : 1
	//  1�� ���� : 1
	//  2�� ���� : 1
	//  ...		 : 
	//  9�� ���� : 0

	unsigned int num=0;		//	0~ 42��
	
	// �� ������ ������ �����ϱ����� �迭 ����
	int reminder[BASE] = { 0, };
	// 0�� ������ �ε��� 0�� ���ҿ� ����
	// 1�� ������ �ε��� 1�� ���ҿ� ����
	// . . . . . . .
	// 9�� ������ �ε��� 9�� ���ҿ� ����

	printf("Enter an integer >>> ");
	scanf("%d", &num);


	for (int i = 1; i < num; i *= 10)
	{
		int mod = (num / i) % 10;
		reminder[mod]++;
	}

	for (int i = 0; i < BASE; i++)
	{
		printf("%d's count = %d\n", i, reminder[i]);
	}
	

	return 0;
}