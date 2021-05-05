#include <stdio.h>

#define OUT 0
#define IN 1

/* count words, lines and characters */

void main()
{
	int c;
	int nw;
	int nl;
	int nc;
	int state;

	nw = 0;
	nl = 0;
	nc = 0;
	state = OUT;
	while((c = getchar()) != EOF)
	{
		++nc;
		if(c == '\n')
		{
			++nl;
		}
		if(c == ' ' || c == '\t' || c == '\n')
		{
			state = OUT;
		}
		else if	(state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("%d, %d, %d\n", nc, nw, nl);
}
