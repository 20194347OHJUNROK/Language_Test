#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

	int tile[20][20] = { 0 };

	int x = 10, y = 10;

	tile[x][y] = 1;
	srand((unsigned)time(NULL));

	while ((x < 19 && x > 0) && (y < 19 && y > 0)) 
	{

		switch (rand() % 8)
		{

		case 0:

			x--;
			break;

		case 1:

			x--;
			y++;
			break;

		case 2:

			y++;
			break;

		case 3:

			x++;
			y++;
			break;

		case 4:

			x++;
			break;

		case 5:

			x++;
			y--;
			break;

		case 6:

			y--;
			break;

		case 7:

			x--;
			y--;
			break;
		}

		tile[x][y] = 1;
	}


	for (int i = 0; i < 20; i++)
	{

		for (int j = 0; j < 20; j++)
		{

			if (tile[i][j] == 1)
				printf(" * ");

			else
				printf(" . ");

		}

		printf("\n");
	}

	return 0;
}
