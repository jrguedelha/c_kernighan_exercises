#include<stdio.h>

/* histogram of the lengths of words */

void main()
{
	int cw;
	int i;
	int c;
	
	cw = 0;
	while((c = getchar()) != EOF)
	{
		if(c == ' ' || c == '\t' || c == '\n')
		{
			if(cw > 0)
			{
				printf("\t\t");
				i = 0;
				while(i < cw)
				{
					printf("-");
					++i;
				}
				printf("\n");
				cw = 0;
			}
		}
		else
		{
			printf("%c",c);
			++cw;
		}
	}
}
