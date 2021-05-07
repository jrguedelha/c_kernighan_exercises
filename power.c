#include<stdio.h>
/* Calcules power */
int power(int m, int n);
void main()
{
	printf("%d\n",power(6,2));
}

int power(int base, int p)
{
	int i;
	int result;

	i = 0;
	result = 1;
	while(i < p)
	{
		result = result * base;
		++i;
	}
	return result;
}
