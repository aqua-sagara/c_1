#include <stdio.h>

int gcd(int,int);
main()
{
  int x,y,a4;
  while(1){
    printf("Input two numbers\n");
    
    scanf("%d%d",&x,&y);
    if (x==0||y==0){
      //printf("exit x = %d, y = %d\n",x , y);
      break;
    }
    else if(x>0&&y>0)
      {
	a4=gcd(x,y);
	printf("GCD of %d and %d is %d\n",x,y,a4);
      }
    
    else {
      printf("Input positive numbers again\n");
    }
  }
}
int  gcd(int x,int y)
{
  int z=1;

  while(1)
      {
	z=x%y;
	if(z==0)
	  break;
	x=y;
	y=z;

      }
  return y;
  
}

    
