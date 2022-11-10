#include<stdio.h>
#include<conio.h>
void main()
{
int week;
clrscr();
printf("Enter Week Nuber (1-7)");
scanf("%d",&week);
if(week == 1)
printf("Monday");
else if(week==2)
printf("tuseday");
else if(week==3)
printf("Wedneday");
else if(week==4)
printf("thusday");
else if(week==5)
printf("friday");
else if(week==6)
printf("saturday");
else if(week==7)
printf("sunday");
else
printf("Please enter valid input between 1 to 7");
getch();
}
