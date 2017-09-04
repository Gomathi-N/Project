#include <stdio.h>
int power(int base, int exponent);

int main()
{
    int b, e;
    scanf("%d%d",&b,&e);
    if(e == 0)
       printf("1");
    else{
       int result = power(b,e);
       printf("%d", result);
    }
    return 0;
}
int power(int base, int exponent){
    int result = base;
    for(int i = 1; i<exponent; i++){
        result = result * base;
    }
    return result;
}
