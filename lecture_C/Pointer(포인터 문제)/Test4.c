#include <stdio.h>

// ������ �迭�� ��� ���Ҹ� ����ϴ� �Լ�
//  �� �Լ��� ���ڰ� �迭�� ���, �Ű������� Ÿ���� �ݵ�� �����ͷ� �����ϰ�
//	  �迭�� ũ��� ���� ������ �޾ƿ��� ���� ����.
//  �� �Լ� �߿��� �����͸� �Ű������� �ϴ� ���
//    ���� �����Ǵ� ���� ���� ���� const �� �ݵ�� ���� ����
void print_array(const int* ptr, int length)
{
	for (int i = 0; i < length; i++)
	{
		// ptr[i] = i * 100;
		printf("array[%d] = %d\n", i, ptr[i]);
		// printf("array[%d] = %d\n", i, *(ptr + i));
	}
}

void print_data(int data)
{
	data += 100;
}

int main()
{
	// �迭�� �ּҸ� ������ �� ���� ������ ���
	// �����ʹ� �ּҸ� �����ϴ� ������ ����
	//  �� �� �� ������ ��� �����ڸ� ���ؼ� ���ϴ� ��ġ�� �޸𸮿� ������ ����.

	int arr1[] = { 10, 20, 30, 40, 50 };
	int arr2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	print_array(arr1, sizeof(arr1) / sizeof(int));
	printf("----------------\n");
	print_array(arr2, sizeof(arr2) / sizeof(int));

	printf("----------------\n");
	printf("arr1[3] = %d\n", arr1[3]);

	int data = 100;
	printf("data = %d\n", data);
	print_data(data);
	printf("data = %d\n", data);
	return 0;
}

