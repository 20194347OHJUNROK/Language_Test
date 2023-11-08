#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void get_dice_face();

int main()
{
	srand((unsigned)time(NULL));
	get_dice_face();

	return 0;
}

void get_dice_face()
{
	int num;
	int n1=0, n2=0, n3=0, n4=0, n5=0, n6 = 0;
	int total = 0;
	
	while (1)
	{
		num = rand() % 6 + 1;
		switch (num)
		{
		case 1:
			n1++;
			break;
		case 2:
			n2++;
			break;
		case 3:
			n3++;
			break;
		case 4:
			n4++;
			break;
		case 5:
			n5++;
			break;
		case 6:
			n6++;
			break;
		}
	
		total = n1 + n1 + n3 + n4 + n5 + n6;
		if (total== 100){break; }
	}

	printf("1 -> %d\n", n1);
	printf("2 -> %d\n", n2);
	printf("3 -> %d\n", n3);
	printf("4 -> %d\n", n4);
	printf("5 -> %d\n", n5);
	printf("6 -> %d\n", n6);
	

}