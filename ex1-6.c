#include<stdio.h>

/* vericando o valor de EOF */

main(){
	int c;

	c = (getchar() != EOF);
	
	printf("%d\n", c);
}
