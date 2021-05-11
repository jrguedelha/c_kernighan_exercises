/*fetch and print the longest line*/
#include<stdio.h>
#define MAX 10

int main()
{
	int c;
	int i;
	char s[MAX];

	i = 0;
	while((i < MAX-1) && ((c = getchar()) != EOF) && (c != '\n'))
	{
		printf("\n%d",c);
		s[i] = c;
		++i;
	}
	if(c == '\n')
	{
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	printf("\n");
	i = 0;
	while(i < MAX)
	{
		printf(" %d ",s[i]);
		++i;
	}
	printf("\n");
	return (0);
}
