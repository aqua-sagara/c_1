#include <stdio.h>
main()
{
int i;
int a=1,b=2;
int array[5];

printf("Before:a=%d;b=%d\n",a,b);
/*arrayへの代入*/
for(i=0;i<5;i++){
  array[i]=999;
 }
printf("After:a=%d;b=%d\n",a,b);
/*arrayの要素出力*/
printf("After:");
for(i=0;i<5;i++){
  printf("array[%d]=5d;",i,array[i]);
	 }
    printf("\n");
 }
	 
