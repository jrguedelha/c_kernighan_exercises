/*reverts the input string*/
#include<stdio.h>
#define MAX 50

int get_line(char line[], int max);
void revert_line(char line[], int length);

int main()
{
	int length;
	char line[MAX];
	
	length = 0;
	while((length = get_line(line, MAX)) > 0)
	{
		revert_line(line, length);
		printf("Reverted: %s\n", line);
	}
	return (0);
}

int get_line(char s[], int max)
{
	int i;
	char ch;

	i = 0;
	while((i < max-1) && ((ch = getchar()) != EOF) && (ch != '\n'))
	{
		s[i] = ch;
		++i;
	}
	if(ch == '\n')
	{
		s[i] = ch;
		++i;
	}
	else
	{
		printf("\n");
	}
	s[i] = '\0';
	return (i);
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
		++i;
	}
	length = length - j;
	i = 0;
	while(i < (length / 2))
	{
		temp = s[i];
		s[i] = s[length-1-i];
		s[length-1-i] = temp;
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
