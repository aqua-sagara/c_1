#include <stdio.h>
main()
{
  int n,d,sum;
  for(n=0;n<=10000;n++)
    {
      d=0;
      sum=0;
      for(d=1;d<=n/2;d++)
	{
	  if(n%d==0)
	    sum+=d;
	}
      if(sum==n){
	printf("%dは完全数です。\n",n);
      }
    }
}
