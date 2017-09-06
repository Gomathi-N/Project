#include <stdio.h>

int main()
{
    int num, originalNum, reverse = 0;
    scanf("%d",&num);
    originalNum = num;
    while(num!=0){
        int remain = num%10;
        reverse = reverse*10 + remain;
        num/=10;
    }
    if(originalNum == reverse){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }
    return 0;
}
