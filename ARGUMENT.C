#include<stdio.h>
#include<conio.h>
int all(a,b)
{
int c,d,e;
float j;
c=a+b;
d=a-b;
e=a*b;
j=a/b;
printf("%d\n%d\n%d\n%f\n",c,d,e,j);
}
void main()
{
int x,y;
clrscr();
printf("enter the x,y");
scanf("%d%d",&x,&y);
all();
getch();
}