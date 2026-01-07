#include<stdio.h>
#include<conio.h>
void simple_interest()
{
int p,n,r,si;
clrscr();
printf("Enter the values:");
scanf("%d%d%d",&p,&n,&r);
si=p*n*r/100;
printf("%d",si);
}
void main()
{
clrscr();
simple_interest();
getch();
}