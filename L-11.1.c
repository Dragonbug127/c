#include "math.h"
#include "stdio.h"//一个整数，它加上100后是一个完全平方数，再加上168又是一个完全平方数，请问该数是多少？
#include "conio.h"
main()
{
  long int i,x,y,z;
  for (i=1;i<100000;i++)
  {
    x=sqrt(i+100); /*x为加上100后开方后的结果*/
    y=sqrt(i+268); /*y为再加上168后开方后的结果*/
    if(x*x==i+100&&y*y==i+268) /*如果一个数的平方根的平方等于该数，这说明此数是完全平方数*/
    printf("\n%ld\n",i);
  }
  getch();
}
