#include <stdio.h>

int main()
{
	/*
	* �迭(Array)
	- �ڷ����� ���� ���� �������� ����
	- ��, �ټ��� ������ �ϳ��� Ÿ������ ����
	- ������ �ڵ������ �Ѵٸ� �迭�� ������� �����غ���!

	* �迭�� ���õ� ���

	- �迭�� ����(item)	 : �迭�� ���Ե� �� ���� ����
	- �迭�� �ε���(index) : �迭�� ���ҿ� �ο��Ǵ� ������ ��ȣ
							   0 ���� �����ؼ� 1�� �����ϴ� ����
	- �迭�� ũ��(length)    : �迭�� ���Ե� ����(���� ����)���� ����


	* �迭�� ����� �ʱ�ȭ

	  �ʱ�ȭ �� ���� �迭�� ũ�⸦ �������� �ʾƵ�
	  ������ ������ŭ �迭�� ũ�Ⱑ �����ȴ�.
	
		int numbers[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
		int numbers2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };


	* �迭�� �ٷ�� ���ؼ��� ����(item)�� ������ �� �� �־�� �Ѵ�.	
	  �� �迭�� �ĺ��ڿ� �ε��� ������([])�� ���� ���ҿ� ����
	  �� numbers[index] : index ��ġ�� ���ҿ� ����
		printf("numbers[0] = %d\n", numbers[0]);

	* �迭�� ���ҿ� ���ο� ���� ����
	printf("numbers[3] = %d\n", numbers[3]);
	numbers[3] = 100;
	printf("numbers[3] = %d\n", numbers[3]);
	printf("\n");
	
	--------------------------------------------------------------------------------------

	* �迭�� ũ��(length)
	  - sizeof ������ : �ڷ����̳� ���� � �Ҵ�� ���� ������ ũ��(����:byte)
	  - (�迭�� �Ҵ�� ���� ������ ũ��) / (�ڷ����� ũ��) = ������ ����
		printf("sizeof(int) = %d\n", sizeof(int));
		- int ���� ũ�� = 4byte

		printf("sizeof(int) = %lld\n", sizeof(numbers[0]));
		- numbers[0]�� ũ�� = 4byte

		printf("sizeof(int) = %lld\n", sizeof(numbers));
		numbers�� ũ�� = 20byte = int ���� ũ�� * ������ ����
							   = 4byte * 5
							   = 20byte

	* �迭 numbers�� ũ��(length)
		int length = sizeof(numbers) / sizeof(int);
		printf("length of numbers = %d\n", length);

		int length2 = sizeof(numbers2) / sizeof(int);
		printf("length of numbers2 = %d\n", length2);
		printf("\n");
	

	* �ε����� ������ ������ �Ǿ��ִ�.(�ε����� 0���� �����Ѵ�.)
	  �迭�� ũ�⸦ 10���� �����ߴٸ� �ε����� 1���� �����ϴ°��̾ƴ϶� (0 ~ length-1)���� �����Ѵ�.
	  ����, �迭�� �ε���(ũ��)���� ������, ����, �Ǽ����� �������� ���������̳� ��ũ�� ����� �����ִ�.
	  - 0 <= index < length
	  - 0 <= index <= length-1

	 numbers[10] = 100;			// compile error

	--------------------------------------------------------------------------------------------

	 �迭�� ��� ���ҿ� ���ʴ�� ����
	 �� ���ҿ� �����ϴµ� �ʿ��� ���� ���������� �ε���

	printf("numbers2[0] = %d\n", numbers2[0]);
	printf("numbers2[1] = %d\n", numbers2[1]);
	printf("...\n");
	printf("numbers2[11] = %d\n", numbers2[11]);
	printf("numbers2[12] = %d\n", numbers2[12]);
	printf("\n");

	�ε����� 0 �������� length ���� 1�� �����ϴ� �ݺ����� �̿��Ͽ�
	 �� ���ҿ� ������ �����ϴ�.

	for (int i = 0; i < length2; i++)
	{
		printf("numbers2[%2d] = %2d\n", i, numbers2[i]);
	}
	printf("\n");

	�ݺ����� �̿��ؼ� �迭�� ��� ���Ҹ� �������� ���
	for (int i = length2-1; i >= 0; i--)
	{
		printf("numbers2[%2d] = %2d\n", i, numbers2[i]);
	}
	printf("\n");

	return 0;
}

*/