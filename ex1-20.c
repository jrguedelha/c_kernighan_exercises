/*replace tabs for blank spaces*/
#include<stdio.h>
#define MAX_LENGTH 100
#define TAB 4

int get_line(char line[],int max);
void replace_tabs(char line[],int length);

int main()
{
	char line[MAX_LENGTH];
	int length;

	length = 0;
	while((length = get_line(line,MAX_LENGTH)) > 0)
	{
		printf("Input line: \t%s(%d)\n",line,length);
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
	return (i);
}

void replace_tabs(char line[], int length)
{
	int i;
	int j;
	//int max;
	char rt[MAX_LENGTH];

	i = 0;
	j = 0;
	//max = 0;
	while(i < length-1)
	{
		if(line[i] == '\t')
		{
			while(j < j+TAB)
			{
				rt[j] = ' ';
				++j;
			}
			
			/*
			j = 1;
			max = i + TAB;
			while(j < TAB)
			{
				if((i + j) == '\0') && ((i + j) < MAX_LENGTH))
				{
					max = (i + j);
				}
				++j;	
			}
			j = 0;
			while(j < max)
			{
				++j;
			}
			i = i + TAB;
			*/
		
		}
		else
		{
			rt[j] = line[i];
			++j;
		}
		++i;
	}
	i = 0;
	while((line[i] = rt[i]) != '\0');
	{
		++i;
	}
}
