#include<stdio.h>
#include<string.h>
int main(){
	char str[50];
	int count=0,n,i;
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++){
		if(str[i]==' '){
			count++;
		}
	}
	printf("%d",count+1);
}
