#include <stdio.h>

int main()

{

   int a=3,b=5,c=7;

if(a>b)  a=b;c=a;

if(c!=a) c=b;

      printf("%d, %d, %d\n",a,b,c);

}
