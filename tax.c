
#include<stdio.h>
int main()
{
    float hours,grosspay,netpay,tax;
    printf("number of hours worked in a week:");
    scanf("%f", &hours);

    if (hours<=40 && hours>=0)
    {
        grosspay = hours * 12;
        printf("your gross pay is :$%f\n" , grosspay);
    }

        else if(hours>40 && hours<168)
       {

        grosspay=(40*12)+(hours-40)*18;
        printf("your gross pay is :$%f\n" , grosspay);
       }

    else
       {

        printf("please enter a valid hour\n");
       }

      if(grosspay<=300 && hours<168 )
      {
        tax=(300*15)/100;
        printf("tax is:%f\n$", tax);
      }
     else if(grosspay<=450 && hours<168 )
     {

        tax=(300*15)/100 + (grosspay-300)*20/100;
         printf("tax is:%f\n$", tax);
     }
     else if(hours<168 )
     {
         tax=(300*15)/100 + (grosspay-300)*20/100 + (grosspay-450)*25/100;
         printf("tax is:%f\n$", tax);
     }
     else
     {
         printf("enter valid hours\n");
     }

     if (grosspay>0)
     {
         netpay=grosspay - tax;
     printf("your weakly net pay is:$%f", netpay);
     }
     else
     {
         printf("enter valid hour");
     }
     }
