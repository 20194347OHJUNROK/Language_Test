#include<stdio.h>
int power(int base, int power_raised)
{
	if (power_raised != 1) { return base * power(base, power_raised - 1); }
	else { return  base; }
}

int main()
{
	int base, raised;
	int result;
	printf("¹Ø¼ö : ");
	scanf("%d", &base);
	printf("Áö¼ö : ");
	scanf("%d", &raised);

	result = power(base, raised);
	printf("%d ^ %d = %d\n", base, raised, result);

	return 0;
}
