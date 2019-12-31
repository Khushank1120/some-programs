				


					//generate prime numbers using arrays
#include<stdio.h>

int main()
{
	int primes[50];

	primes[0]=2;
	primes[1]=3;

	int primeindex=2;


	for(int i=3;i<=100;i++)
	{
		for(int j=0;j<primeindex;j++)
		{
			if(i % primes[j] != 0)  
			{
				if(j==primeindex-1)   
				{
					primes[primeindex]=i;
					primeindex++;

				}

			}
			else
			{
				break;
			}
		}

	}
                	printf("prime number between 0 and 100 are:\n");
                	
	             for(int j=0;j<primeindex;j++)
	               {
	                   printf("%d ",primes[j]);
	               }
	                
	return 0;
}
