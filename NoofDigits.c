#include<stdio.h>

int main(){
	int number;
	int digit=0;
	scanf("%d",&number);
	while(number!=0){
		number/=10;
		digit++;
	}
	printf("%d",digit);
	return 0;
}
