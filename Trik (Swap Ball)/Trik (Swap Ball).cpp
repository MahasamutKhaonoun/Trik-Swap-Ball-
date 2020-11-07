#include<stdio.h>

int checkpositon(int, char);

int main()
{
	char c[1000];
	char* n = c;
	int all;
	int result = 1;
	for (int i = 0; i < 1000; i++)
	{
		scanf_s("%c", &c[i]);
		int a = c[i];
		if (a == 10) // New line
		{
			all = i;
			i = 1001; // Exit
		}
		else if (c[i] != 'A' && c[i] != 'B' && c[i] != 'C')
		{
			printf("Error");
			return 1;
		}
	}
	for (int i = 0; i < all; i++)
	{
		result = checkpositon(result, c[i]);
	}
	printf("%d", result);
	return 0;
}

int checkpositon(int x, char y)
{
	int pos = x;
	if (y == 'A')
	{
		switch (x)
		{
		case 1: pos = x + 1; break;
		case 2: pos = x - 1; break;
		case 3: pos = x; break;
		default: 
			break;
		}
	}
	else if (y == 'B')
	{
		switch (x)
		{
		case 1: pos = x; break;
		case 2: pos = x + 1; break;
		case 3: pos = x - 1; break;
		default: 
			break;
		}
	}
	else if (y == 'C')
	{
		switch (x)
		{
		case 1: pos = x + 2; break;
		case 2: pos = x; break;
		case 3: pos = x - 2; break;
		default: 
			break;
		}
	}
	return pos;
}