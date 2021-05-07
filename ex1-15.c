#include<stdio.h>
#define LOWER 0
#define UPPER 300
#define STEP 20
/* Temperature conversion */

double fah_to_cel(int f);

int main()
{
	int i;

	i = LOWER;
	printf("\n%s\t%s\n","Fahr","Cel");
	while(i <= UPPER)
	{
		printf("%4d\t%6.2f\n",i,fah_to_cel(i));
		i = i  + STEP;
	}
	return (0);
}

double fah_to_cel(int fah)
{
	double celsius;

	celsius = (5.0 * (fah - 32.0) / 9.0);
	return celsius;
}
