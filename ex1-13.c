#include<stdio.h>
#define TAB 15

/* histogram of the lengths of words */

void main()
{
	int cw;
	int i;
	int c;
	int tab;
	
	cw = 0;
	tab = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			if(cw > 0)
			{
				tab = TAB - cw;
				i = 0;
				while(i < tab)
				{
					printf(" ");
					++i;
				}
				printf("%2d | ",cw);
				i = 0;
				while(i < cw)
				{
					printf("-");
					++i;
				}
				printf("\n");
				cw = 0;
			}
			if(c == '\n')
			{
				printf("\n");
			}
		}
		else
		{
			printf("%c",c);
			++cw;
		}
	}
	printf("\n");
}
