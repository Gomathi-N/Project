#include<stdio.h>
void checkLeapYear();
int main(){
	int year;
	scanf("%d",&year);
	checkLeapYear(year);
}
void checkLeapYear(int year){
	if(year%400==0)
		printf("Leap year");
	else if((year%100!=0)&&(year%4==0))
		printf("Leap year");
	else
		printf("Not a leap year");
	
}
