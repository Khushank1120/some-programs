#include<stdio.h>


        // Just two functions one calculates gcd of two numbers and one absolute value

float absoluteValue(float x)
{
    if (x<0)
        x=-x;
        return x;
}
int greatestFunction(int a,int b)
{

      if (b == 0)
        return a;
    return greatestFunction(b, a % b);
}

        int main()
{
            float x=0;
             x = absoluteValue(-2.333);
            printf("%f\n", x);
            int a = 15, b = 20;
    printf("GCD of %d and %d is %d ", a, b, greatestFunction(a, b));
    return 0;
}
