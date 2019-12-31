
// Opportunity for better design

#include <stdio.h>

int main( )

{
    int n;

    printf("enter the number to be tested:");
    scanf("%d", &n);

    if(n<0)
    printf("your number is negative");

    else if(n>0)
    printf("your number is positive");

    else
    printf("your number is zero");

    return 0;

}


