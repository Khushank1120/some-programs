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
			if(i % primes[j] != 0)   //it will check if the no. are prime or not.
			{
				if(j==primeindex-1)    //it will check for all previous prime numbers.
				{
					primes[primeindex]=i;
					printf("%3d",primes[primeindex]);
					primeindex++;

				}

			}
			else
			{
				break;
			}
		}

	}
	return 0;
}
