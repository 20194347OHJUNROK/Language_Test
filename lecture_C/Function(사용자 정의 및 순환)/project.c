/*
* �Լ� ������Ʈ�� �ϱ����� ����
: �Լ� ������Ʈ �޴��� �ۼ� �� �˰��� ������ ���Ե� �˰��� �ۼ� �� �˰��� �°Բ� �������� �׸�
  �� �Լ� ���� ���赵�� �ۼ� �� ���赵�� ������� �ҽ��ڵ带 �ۼ�
*/
#include"sonata.h"

int main()
{
	int i = 0;
	int count;

	printf("��� �����Ͻǰǰ���? : ");
	scanf("%d", &count);
	printf("\n");
	printf("\n===�ҳ�Ÿ 2000cc �� 2400cc �������===\n");
	srand((unsigned) time(NULL));

	for (i = 1; i <= count; i++)
	{
		sonata2000();
		sonata2400();
	}
	printf("\n==�ҳ�Ÿ 2000cc�� 2400cc ���� �Ϸ�===\n\n");

	return 0;
}