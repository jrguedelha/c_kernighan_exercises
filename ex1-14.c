#include<stdio.h>

/* Histogram of characters number of string input */

void main()
{
	int c;
	int i;
	int j;
	int nchars[52];
	int ascii[52];

	i = 0;
	j = 0;
	while(i < 52)
	{
		nchars[i] = 0;
		if(i < 26)
		{
			ascii[i] = (i + 65);
		}
		else
		{
			ascii[i] = (i + 71);
		}
		++i;
	}
	while((c = getchar()) != EOF)
	{
		if(c >= 65 && c <= 90)
		{
			++nchars[c - 65];
		}
		else if(c >= 97 && c <= 122)
		{
			++nchars[c - 71];
		}
	}
	printf("\n");
	i = 0;
	while(i < 52)
	{
		if(nchars[i] != 0)
		{
			printf("%c",ascii[i]);
			printf("%3s","|");
			printf(" ");
			while(j < nchars[i])
			{
				printf("-");
				++j;
			}
			j = 0;
			printf("\n");
		}
		++i;
	}
	printf("\n");
}
