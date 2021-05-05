#include<stdio.h>

/* count blanks, tabs and news lines */

int main(){
	int c,d;

	d=0;
	while((c=getchar()) != EOF){
		if(c==' ' || c=='\t' || c=='\n'){
			++d;
		}
		printf("%d\n",d);
	}
}
