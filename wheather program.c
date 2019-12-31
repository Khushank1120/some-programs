#include<stdio.h>

    // TYPES 12 VALUES PER MONTH IN A YEAR AND IT WILL TELL YOU YEARLY AND MONTHLY AVG RAINFALL.

int main()
{

    float rainfall[3][12];

    float total;
    float subtotal;
    int i ;
    int j;

        for(i=0;i<3;i++)
        {
                printf("enter 12 values of %d  year per month:",i+1 );
                for(j=0;j<12;j++)
                {
                scanf("%f", &rainfall[i][j]);
                }
        }

     printf("YEAR\t\tRAINFALL  (inches)\n");

                for(i=0,total=0;i<3;i++)
                {
                    for(j=0,subtotal=0;j<12;j++)
                    {
                        subtotal+=rainfall[i][j];
                    }
                         printf("%5d \t%15.1f\n" ,2015 + i , subtotal);
                         total+=subtotal;
                }
                printf("\nThe yearly average is %.1f inches.\n\n",total/3);

                printf("MONTHLY AVERAGES:\n\n");
                printf(" Jan   Feb   Mar   Apr   May   Jun   Jul   Aug   Sep   Oct   Nov   Dec\n");

                for(i=0;i<12;i++)
                {
                    for(j=0,subtotal=0;j<3;j++)
                    {
                          subtotal += rainfall[j][i];
                    }
                          printf("%5.1f ", subtotal/3);
                }

                return 0;
}
