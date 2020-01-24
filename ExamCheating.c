#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);

    for(int i=0;i<T;i++)
    {
        long int A, B,set1,set2,p,ans=0;
        scanf("%ld%ld",&A,&B);

        for(p=1;;p++)
        {
            set1 = (A-1)%p;
            set2 = (B-1)%p;

            if((set1 == set2))
            {
               ans++;
            }
            if((A-1)&&(B-1)<p)
            {
               break;
            }
        }
            if(A==B)
                {
                ans=-1;
                printf("%ld",ans);
                }
           else printf("%ld",ans);

    }
}
/**#include <stdio.h>
#include <math.h>
int main(void)
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
	    int a, b, p, l, s, c=1, t;
	    scanf("%d %d", &a, &b);
	    if(a<b)
	    {
	        l=b;
	        s=a;
	    }
	    else
	    {
	        l=a;
	        s=b;
	    }
	    t = (int)sqrt(l-s);
	    for(p=2; p<=t; p++) if((l-s)%p==0) c++;
	    c *= 2;
	    if(t*t==l-s) c--;
	    printf("%d\n", c);
	}
    return 0;
}
**/
