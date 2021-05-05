#include<stdio.h>

/* Replacing tabs, backspace and backslash */

int main(){
	int c;
	
	while((c=getchar()) != EOF){
		if(c == '\t'){
			printf("%s","\\t");
		}else if(c == '\b'){
			printf("%s","\\b");
		}else if(c == '\\'){
			printf("%s","\\\\");
		}else{
			printf("%c",c);
		}
	}
}
