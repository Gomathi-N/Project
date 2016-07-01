#include<stdio.h>
int main(){
	static int i=1;
	if(i<=5){
		printf("Hello\n");
		i++;
		main();
	}
}
