#include<stdio.h>

double AVERAGE(int n1, int n2);

int main()
{
	int n1, n2;
	
	printf("Enter two scores : ");
	scanf("%d %d", &n1, &n2);
	printf("\n");


	printf("The average of %d and %d = %g\n", n1, n2, AVERAGE(n1,n2));


	return 0;
}

// �ΰ��� ������ ����� ���ϴ� �Լ��� ������!!!
double AVERAGE(int n1, int n2)
{
	double average = (double)n1 + n2 / 2;

	return average;

}

// �ΰ��� ������ ����� ���ϴ� �Լ��� ������!!!
//double AVERAGE(double n1, double n2)
//{
//	������ ���ڰ� �Ű������� ���޵� ��
//  �ڵ��� ��ȯ���� ���� �Ǽ������� ��ȯ�ȴ�.
//	return (n1+n2)/2;
//
//}