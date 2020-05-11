#include <stdio.h>
#include <conio.h>
#include <windows.h>

double a = 2;
double b = 10;
double c = 20;

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


double a1 = b*c; //200 v
double a2 = 2*a; //4 n
double a3 = b+2;  //  12 n
double b1 = a+a1; // 202 v
double b2 = a2-b-c; //-26 niz
double c1 = b1 / 2; //101 v
double c2 = b2 / 2; //13 n
double c3 = a / 2; //1 v
double c4 = a3 / 2; //6 n
double d1 = c1 * 6; //606 v
double d2 = c2 * 6; //78 n
double d3 = c3 * 13;//13 v
double d4 = c4 * 13;//78 n
double e1 = - d1 + d3;
double e2 = e1 / d4;


printf("\r\nВідповіть: [%.2f] \r\n",e2);


// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}