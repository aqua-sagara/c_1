#include <stdio.h>
#define NUM 200
int isprime(int);
main()
{
  int i,a,b[3];
  printf("NUM以下の三つ子素数の組は次の通り:\n");
  for(i=5;i<=NUM;i+=2){
    a=0;
    if (isprime(i)==1){
      b[a]=i;
      a++;
    
	}
    if(isprime(i+2)==1){
      b[a]=i+2;
      a++;
     
    }
    if(isprime(i+4)==1){
      b[a]=i+4;
 a++;
   
    }
    if(isprime(i+6)==1){
      b[a]=i+6;
    a++;
    
  }
    if(a==3)
    printf("三つ子素数{   %d,   %d,   %d}\n",b[0],b[1],b[2]);
  }
}
int isprime(int a){
    int i;
 
    if(a < 2)
        return 0;
    else if(a == 2)
        return 1;
 
    if(a% 2 == 0)
        return 0;
 
    for(i = 3; i <= a / i; i += 2)
         if(a % i == 0)
            return 0;
    return 1;
}
