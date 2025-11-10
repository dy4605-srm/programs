#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,array[1000];
	printf("enter the number element in the array");
	scanf("%d",&a);
	
	for(i=0;i<a;i++)
	{
		printf("enter the number in array");
		scanf("%d",&array[i]);
		
	}
	for(i=0;i<a;i++)
	{
	
	printf("%d",array[i]);
}
	getch();
return 0;	
}
