#include <stdio.h>

main () {
  int n;
  
  printf("0でない自然数nを入力\n");
  scanf("%d", &n);
  
  while ( n!=1) {

    switch (n%2){
    case 0:
      n=n/2;
      printf("n=%d\n",n);
	break;
    case 1:
      n=n*3+1;
      printf("n=%d\n",n);
      break;
    }


   
 }

 printf("終了します\n");
  
}

