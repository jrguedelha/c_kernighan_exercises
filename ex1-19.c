/*reverts the input string*/
#include<stdio.h>
#define MAX 50

int get_line(char line[], int max);
void revert_line(char line[], int length);

int main()
{

	return (0);
}

int get_line(char s[], int max)
{
	int i;
	char c;

	i = 0;
	while((i < max-1) && ((c = getchar()) != EOF) && (c != '\n'))
	{
		s[i] = c;
		++i;
	}
	if(c == '\n')
	{
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

void revert_line(char s[], int length)
{
	int i;
	int j;
	char temp;

	i = 0;
	j = 0;
	while(i < length)
	{
		if((s[i] == '\n') || (s[i] == '\0'))
		{
			++j;
		}
	}
	length = length - j;
	i = 0;
	while(i < (length / 2))
	{
		temp = s[i];
		s[i] = s[length-1-i];
		s[length-1-1] = temp;
		++i;
	}
	if(j > 1)
	{
		s[length] = '\n';
		s[length+1] = '\0';
	}
	else
	{
		s[length] = '\0';
	}
}
