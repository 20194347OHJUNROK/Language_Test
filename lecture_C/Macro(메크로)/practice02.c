#include<stdio.h>

// ��������
int n1 = 10;
int n2 = 20;

// �ΰ��� ���� �߿��� ū ���� ���ϴ� �Լ�
int MAX(int n1, int n2)
{
	int max = n1 > n2 ? n1 : n2;

	return max;
}

// �ΰ��� ���� �߿��� ���� ���� ���ϴ� �Լ�
int MIN(int n1, int n2)
{
	int min = n1 < n2 ? n1 : n2;

	return min;
}
// ���ǿ� ���� �� �� �ٷ� ���� ���ǹ� ���ٴ� ���ǿ����ڰ� �ξ� �����ϴ�!!!

int main()
{

	printf("MAX = %d , Min = %d\n", MAX(n1, n2), MIN(n1, n2));

	return 0;
}