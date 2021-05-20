/*replace tabs for blank spaces*/
#include<stdio.h>
#define MAX_LENGTH 250
#define TAB 6

int get_line(char line[],int max);
void replace_tabs(char line[],int length);

int main()
{
	char line[MAX_LENGTH];
	int length;

	length = 0;
	while((length = get_line(line,MAX_LENGTH)) > 0)
	{
		printf("Line in: %s",line);
		replace_tabs(line,length);
		printf("Line re: %s\n",line);
	}
	return (0);
}

int get_line(char line[],int max)
{
	int i;
	char c;

	i = 0;
	while((i < max-1) && ((c = getchar()) != EOF) && (c != '\n'))
	{
		line[i] = c;
		++i;
	}
	if(c == '\n')
	{
		line[i] = c;
		++i;
	}
	else
	{
		printf("\n");
	}
	line[i] = '\0';
	return (i);
}

void replace_tabs(char line[], int length)
{
	int i;
	int j;
	int jump;
	char rt[MAX_LENGTH];

	i = 0;
	j = 0;
	jump = 0;
	while(i < length)
	{
		if(line[i] == '\t')
		{
			jump = j + TAB;
			while(j < jump)
			{
				rt[j] = ' ';
				++j;
			}
		}
		else
		{
			rt[j] = line[i];
			++j;
		}
		++i;
	}
	rt[j] = '\0';
	i = 0;
	while((line[i] = rt[i]) != '\0')
	{
		++i;
	}
}
