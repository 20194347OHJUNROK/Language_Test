#include<stdio.h>
/*
2�� ������
  ������ ������ �����ϱ����� ����Ѵ�.
  �ּҸ� �����ϴ� ������ �����ϱ� ������
  ��� �����ڷ� ������ �ϰ� �Ǹ� �޸� �ּ��� ũ���� 8byte ��ŭ �����Ѵ�.
	int** pArr3 = arr;
	printf("pArr3   -> %p\n", pArr3);
	printf("pArr3+1   -> %p\n", pArr3+1);
*/
int main()
{
	// ������ �迭 ���� �� �ʱ�ȭ
	const char* season[4] = { "Spring", "Summer", "Fall", "Winter" };
	char c = 'F';
	char* pt = NULL;
	char** ppt = NULL;

	pt = &c;
	ppt = &pt;

	printf("�Ϲ� ���� c�� �ּҰ� : %u\n", &c);
	printf("�̱� ������ pt�� �������ִ� �ּҰ�: %u\n", pt);
	printf("�̱� ������ &pt�� �ּҰ�: %u\n", &pt);
	printf("���� ������  ppt�� �������ִ� �ּҰ� : %u\n", ppt);
	printf("���� ������  *ppt�� �������ִ� �ּҰ� : %u\n", *ppt);
	printf("���� ������  &ppt�� �ּҰ� : %u\n", &ppt);
	printf("--------------------------------------------------\n\n");


	printf("�Ϲ� ���� c�� �� : %c\n", c);
	printf("�̱� ������ *pt�� ����Ű�� ��: %c\n", *pt);
	printf("���� ������  **ppt�� ����Ű�� ��: %c\n", **ppt);
	printf("--------------------------------------------------\n\n");

	// pt = season;
	// ������ �迭 season�� �ּ��� �ּҰ��̹Ƿ� �̱������� pt�� �����ϸ� ��� �߻��Ѵ�.
	ppt = season;
	
	printf("������ �迭 season�� �ּҰ� : %u\n", season);
	// �� printf("������ �迭 season[0]�� �ּҰ� : %u\n", &season[0]); �� ����(���� �ּҸ� ����)
	printf("���� ������ ppt�� �������ִ� �ּҰ� : %u\n", ppt);
	printf("������ �迭 season�� �� ����Ʈ �� : %zdbyte\n", sizeof(season));
	printf("���� ������ ppt�� �� ����Ʈ �� : %zdbyte\n\n", sizeof(ppt));

	for (int i = 0; i < 4; i++)
	{
		printf("%d��° �迭 ��� ��� : %s\n", i, *(ppt + i));
		printf("%d��° �迭 ����� �ּҰ� : %u\n\n", i, (ppt + i));

	}


	return 0;
}


