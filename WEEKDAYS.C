#include<stdio.h>
#include<conio.h>
void main()
{
int i;
char array[][20]={"a","b","c","d","e"};
clrscr();
for (i=0;i<3;i++)
	printf("%s\n",array[i]);
getch();

}