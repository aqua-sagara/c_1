#include<stdio.h>
main()
{
  int event[14]={1467,1858,645,1274,1910,1707,1367,1615,1574,1192,752,1600,
		 1333,1598},i;
		 for(i=0;i<14;i++){
    if(event[i]>=1185&&event[i]<=1333)
      printf("%d年は鎌倉時代です。\n",event[i]);
    else if(event[i]>=1336&&event[i]<=1573)
   printf("%d年は室町時代です。\n",event[i]);
    else if(event[i]>=1576&&event[i]<=1600)
   printf("%d年は安土桃山時代です。\n",event[i]);
    else if(event[i]>=1603&&event[i]<=1868)
   printf("%d年は江戸時代です。\n",event[i]);
 else 
   printf("%d年は４つの時代以外です。\n",event[i]);
		 }
  }
