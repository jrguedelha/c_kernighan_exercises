#include<stdio.h>

/* count digits, white space, and others */

void main()
{
	int i;
	int c;
	int cws;
	int co;
	int cd[10];

	cws = 0;
	co = 0;
	i = 0;
	while(i <= 10)
	{
		cd[i] = 0;
		++i;
	}
	while((c = getchar()) != EOF)
	{
		if(c >= '0' && c <= '9')
		{
			++cd[c-'0'];
		}
		else if (c == ' ' || c == '\t' || c == '\n')
		{
			++cws;
		}
		else
		{
			++co;
		}
	}
	printf("Numbers:");
	i = 0;
	while (i <= 9)
	{
		printf(" %d", cd[i]);
		++i;
		
	}
	printf(", White Space: %d, Others: %d\n", cws, co); 
}
