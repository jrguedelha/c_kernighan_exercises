#include<stdio.h>

/* removing blanks */

int main(){
	int c;

	c=getchar();
	while(c != EOF){
		if(c == ' '){
			while (c == ' '){
				c=getchar();
			}
			printf("%c",' ');
		}
		
		if(c!='\n'){
			printf("%c",c);
			c=getchar();		
		}
		
		if(c=='\n') c=EOF;
	}
	printf("\n");
}
