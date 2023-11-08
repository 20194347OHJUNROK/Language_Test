#include<stdio.h>
int fibonacci(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fibonacci(n - 2) + fibonacci(n - 1);
}

int main()
{
	for (int i = 0; i < 10; i++)
		printf("fib(%d) = %d\n", i, fibonacci(i));

	return 0;
}