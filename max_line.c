/*fetch and print the longest line*/
#include<stdio.h>
#define MAXLINE 100

int get_line(char line[], int maxline);
void copy(char from[], char to[]);

int main()
{
	int lines;
	int long_line;
	int len;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];

	lines = 0;
	max = 0;
	while((len = get_line(line, MAXLINE)) > 0)
	{
		++lines;
		if(len > max)
		{
			max = len;
			copy(line, longest);
			long_line = lines;
		}
	}
	printf("\n");
	if(max > 0)
	{
		printf("Longest line\nLine %2d: %s\n",long_line,longest);
	}
	return (0);
}

int get_line(char s[], int lim)
{
	int i;
	int c;

	i = 0;
	while((i < lim-1) && ((c = getchar()) != EOF) && (c != '\n'))
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

void copy(char from[], char to[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
	{
		++i;
	}
}
