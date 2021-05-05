#include<stdio.h>

/* prints input on word per line */

void main()
{
	int c;

	while((c = getchar()) != EOF)
	{
		printf("%c\n",c);
	}
}
