#include "stdio.h"
#include "conio.h"
void main(void)
{
  int color;
  for (color = 1; color < 16; color++)
  {
    textcolor(color);/*�����ı���ɫ*/
    cprintf("This is color %d\r\n", color);
  }
  textcolor(128 + 15);
  cprintf("This is blinking\r\n");
  getch();
}
