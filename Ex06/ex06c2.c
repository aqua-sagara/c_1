#include <stdio.h>
main()
{
  int n,i,a,b,c;
  printf("1から9までの整数を入力してください:");
  scanf("%d",&n);
  if(n>=10)
    printf("入力する數は1から9までです\n");
  
  else if(n>0&&n<10){
    for(i=1;i<=n;i++)
      {
	for(a=1;a<=i;a++)
	  printf("%d",i);
   	printf("\n");  }
  for(b=n-1;b>0;b--)
    {
      for(c=b;c>0;c--)
	printf("%d",b);
      printf("\n");
    }
  }
}


