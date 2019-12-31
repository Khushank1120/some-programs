

// Opportunity for better design

#include <stdio.h>

int main( )
{
    int a;
    int b;

    printf("enter the number to be tested: " );
    scanf("%d", &a);

    b=a%2;

    if(b==0)

    printf("your number is even");

    else
    printf("your number is odd");

    return 0;
}


