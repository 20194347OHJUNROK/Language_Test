#include <stdio.h>
int show_digit(int x) 
{
	if (x < 10)
		return printf("%d ", x);
	else
		show_digit(x / 10);

	return printf("%d ",x%10);
}

int main() 
{
	int num;
	printf("������ �Է��Ͻÿ�: ");
	scanf("%d", &num);
	show_digit(num);
	return 0;
}
