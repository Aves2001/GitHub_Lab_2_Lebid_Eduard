#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int x = 0;
int z = 0;


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


printf("x = ");
scanf ("%d",&x);
printf("z = ");
scanf ("%d",&z);

double a1 = 2*x-1;
double a2 = z+3;
double a3 = log10(a1);
double a4 = log10(a2);
double a5 = a3/a4;
double a6 = sqrt(a5);

printf("\r\nВідповіть: y = %f \r\n",a6);


// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}