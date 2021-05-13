/*get lines and print the lines greater than MAX*/
#include<stdio.h>
#define SPAN 100
#define MAX 80

int get_line_length(char line[],int span);

int main()
{
	int length;
	char line[SPAN];

	length = 0;
	while((length = get_line_length(line, SPAN)) > 0)
	{
		if(length > MAX)
		{
			printf("\n%s(%d)\n",line,length);
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}


int get_line_length(char s[], int span)
{
	int c;
	int i;

	i = 0;
	while((i < span-1) && ((c = getchar()) != EOF) && (c != '\n'))
	{
		s[i] = c;
		++i;
	}
	if(c == '\n')
	{
		s[i] = '\n';
		++i;
	}
	s[i] = '\0';
	return (i);
}
