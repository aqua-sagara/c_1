#include <stdio.h>
#include <math.h>
int voidd2b(int,int);

main()
{
  int n,a[8],c;
  while(1){
    printf("2進数に直したい10進数の正の整数を入力して下さい\n");
    printf("負の数の場合は終了です\n");
    scanf("%d",&n);
    if(n<0)
      break;
    printf("10進数表示%dの2進数表示は,\n",n);
    for(c=0;c<8;c++){
      a[c]=voidd2b(n,c);
     
      printf("%d",a[c]);
      
    }
    printf("\n") ;
  }
}
int voidd2b(int n, int c){
    int q;
    int t;
    int s[8];
    int i;
    for(i=7;i>=0;i--)
      {
	q=n%2;
	t=n/2;
	n=t;
	s[i]=q;
      
      }
    return s[c];
  }
    
