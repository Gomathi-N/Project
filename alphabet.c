#include<stdio.h>
#include<ctype.h>
int main(){
	char c;
	scanf("%c",&c);
	if(isalpha(c)){
		printf("Alphabet");
	}
	else{
		printf("Not an alphabet");
	}
}
