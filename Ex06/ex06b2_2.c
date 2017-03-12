#include <stdio.h>
main()
{
  int n,r,x,y=1,z=1,a,b,d=1,e;
  printf("nとrを入力してください:");
  scanf("%d%d",&n,&r);
  for(x=n;x>n-r;x--){
    y*=x;
  
}/*n-rの階乗*/

 for(b=n;b>0;b--)
    {
      d*=b;
    }/*nの階乗*/
  for(a=r;a>0;a--)
    {
      z*=a;
    }/*rの階乗*/
  e=d/y/z;
printf("%dC%d=%d\n",n,r,e);
}
