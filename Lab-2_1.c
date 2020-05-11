#include <stdio.h>
#include <conio.h>
#include <windows.h>

int a = 0;
int b = 0;
int c1 = 0;
int c2 = 0;
int c3 = 0;

int chcp, chcpOut = 0;
int main(void)
{
// память chcp
	chcp = GetConsoleCP();
	chcpOut = GetConsoleOutputCP();

// UTF-8
	SetConsoleCP(65001);                
	SetConsoleOutputCP(65001);
//

  printf ("a=");
  scanf ("%d", &a);
  printf ("b=");
  scanf ("%d", &b);
  int  c1 = a+b;
  int  c2 = a/b;
  int  c3 = a-b;

  printf ("\r\nСума = %d \r\nЦіла частина від ділення = %d \r\nРізниця = %d\r\n", c1, c2, c3);

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
  return 0;
}
