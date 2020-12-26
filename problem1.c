#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<math.h>
int main()
{
   int t[10000];
  int a,n,p,i,j,d,s=0;
  scanf("%i",&n);
  scanf("%i",&p);
  i=0;
 d=n,a=p;
  while (n/10!=0)
    {
        t[i]=n%10;
        n=n/10;
        i=i+1;
    }
  t[i]=n%10;

  for(j=i;j>=0;j--)
   {s=s+pow(t[j],p);
   p=p+1;}


   if((s/d)==a)
      printf("%i",(s/d));
    else
      printf("-1");
    return 0;
}
