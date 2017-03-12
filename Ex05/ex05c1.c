#include <stdio.h>
main()
{
  int m,d,sum=0,count;

  count=1;
  printf("月と日を空白で区切って入力してください");

  scanf("%d%d",&m,&d);
  while(count<m){

    switch(count){
   
    case 1:sum+=31;
      break;

    case 2:sum+=28;
      break;

    case 3:sum+=31;
      break;

    case 4:sum+=30;
      break;

    case 5:sum+=31;
      break;

    case 6:sum+=30;
      break;

    case 7:sum+=31;
      break;

    case 8:sum+=31;
      break;

    case 9:sum+=30;
    break;

    case 10:sum+=31;
      break;

    case 11:sum+=30;
	break;

    case 12:sum+=31;
    break; 
 }
    count=count+1;
  }
  sum+=d;
  if(sum%7==1)
    printf("2014年%d月df日は水曜日です\n",m,d);
 if(sum%7==2)
    printf("2014年%d月%d日は木曜日です\n",m,d);
 if(sum%7==3)
    printf("2014年%d月%d日は金曜日です\n",m,d);
 if(sum%7==4)
    printf("2014年%d月%d日は土曜日です\n",m,d);
 if(sum%7==5)
    printf("2014年%d月%d日は日曜日です\n",m,d);
 if(sum%7==6)
    printf("2014年%d月%d日は月曜日です\n",m,d);
 if(sum%7==0)
    printf("2014年%d月%d日は火曜日です\n",m,d);
      }










