#include <stdio.h>
int isprime(int);
main()
{
  int a[10][10],i,j=0,b;
  for(i=2;i<=1000;i++){
    if( 1==isprime(i) ){
      printf("%5d ", i);
      j++;
      if(j==10){
	printf("\n");
	j=0;
      }
    }
  }
  printf("\n");

  return;

  // for(j=0;j<10;j++){
  //   printf("%d")
  //	}
  // printf("\n")
  //    }}
}

int isprime(int n){
    int i;
 
    if(n < 2)
        return 0;
    else if(n == 2)
        return 1;
 
    if(n % 2 == 0)
        return 0;
 
    for(i = 3; i <= n / i; i += 2)
         if(n % i == 0)
            return 0;
    return 1;
}
