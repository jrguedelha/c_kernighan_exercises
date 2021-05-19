/*replace tabs for blank spaces*/
#include<stdio.h>
#define MAX 80
#define TAB 4

int get_line(char line[],int max);
void replace_tabs(char line[],int length);

int main()
{
	char line[];

	while((length = get_line(line,MAX)) > 0)
	{
		printf("Input line: \t%s\n",line);
		replace_tabs(line,length);
		printf("Replaced line: \t%s",line);
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
	return (0);
}

void replace_tabs(char line, int length)
{
	int i;
	int j;
	int max;

	i = 0;
	max = 0;
	while(i < length-1)
	{
		if(line[i] == '\t')
		{
			j = 1;
			max = i + TAB;
			while(j < TAB)
			{
				if((i + j) == '\0') && ((i + j) < MAX))
				{
					max = (i + j);
				}	
			}
			j = 0;
			while(j < max)
			{
				
			}
			i = i + TAB;
		}
		else
		{
			++i;
		}
	}
}
