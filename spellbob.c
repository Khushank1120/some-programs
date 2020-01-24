#include<stdio.h>
int main(void)
{
 int T;
 scanf("%d",&T);
 for(int i=0;i<T;i++)
 {
     char S1[4],S2[4];
     scanf("%s",S1);
     scanf("%s",S2);
     if((S1[0]=='o'||S2[0]=='o') && (S1[1]=='b'||S2[1]=='b') && (S1[2]=='b'||S2[2]=='b'))
     printf("yes\n");
     else if((S1[0]=='b'||S2[0]=='b') && (S1[1]=='o'||S2[1]=='o') && (S1[2]=='b'||S2[2]=='b'))
     printf("yes\n");
     else if((S1[0]=='b'||S2[0]=='b') && (S1[1]=='b'||S2[1]=='b') && (S1[2]=='o'||S2[2]=='o'))
     printf("yes\n");
     else
     printf("no\n");
 }

 }


