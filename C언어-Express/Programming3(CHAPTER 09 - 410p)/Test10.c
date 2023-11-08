#include<stdio.h>
double recursive(double n)
{
	if (n != 1)
		return 1.0 / n + recursive(n - 1);
	else
		return n;
}

int main()
{
	double num;
	scanf("%lf", &num);

	printf("%lf",recursive(num));
	return 0;
}
