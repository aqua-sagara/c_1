#include <stdio.h>
main()
{
  int i,k,n,s=0,s2;
  printf("nを入力してください:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
{
k=i*i;
 s=s+k;

}
 
 s2=n*(n+1)*(2*n+1)*1/6;
  printf("1から%dまでの2乗和は%dです\n",n,s);
  printf("公式による結果は%dです\n",s2);
}

