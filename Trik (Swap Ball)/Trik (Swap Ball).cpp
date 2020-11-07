#include<stdio.h>

int checkpositon(int, char);

int main()
{
	struct CharACB
	{
		char c[1000];
		char* n = c;
	}CB;
	struct Amount
	{
		int all;
		int a;
		int result = 1;
	}num;
	
	for (int i = 0; i < 1000; i++)
	{
		scanf_s("%c", &CB.c[i]);
		num.a = CB.c[i];
		if (num.a == 10) // New line
		{
			num.all = i;
			i = 1001; // Exit
		}
		else if (CB.c[i] != 'A' && CB.c[i] != 'B' && CB.c[i] != 'C')
		{
			printf("Error");
			return 1;
		}
	}
	for (int i = 0; i < num.all; i++)
	{
		num.result = checkpositon(num.result, CB.c[i]);
	}
	printf("%d", num.result);
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