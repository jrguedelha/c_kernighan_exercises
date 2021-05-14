/*remove blanks spaces and tabs from the text input*/
#include<stdio.h>
#define LENGTH 80

int get_line(char line[], int length);

int main()
{
	int line_length;
	char line[LENGTH];

	line_length = 0;
	while((line_length = get_line(line, LENGTH)) > 0)
	{
		printf("%s\n",line);
	}
	return (0);
}

int get_line(char line[], int max_len)
{
	int ch;
	int i;

	i = 0;
	while((i < max_len-1) && ((ch = getchar()) != EOF) && (ch != '\n'))
	{
		if((ch != '\t') && (ch != ' '))
		{
			line[i] = ch;
			++i;
		}
	}
	if(ch == '\n')
	{
		line[i] = ch;
		++i;
	}
	line[i] = '\0';
	return (i);
}
