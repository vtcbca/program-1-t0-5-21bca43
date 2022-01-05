/*write a program to enter number and check it is prime or not*/
#include<stdio.h>
#include<conio.h>
  void main()
{
	int a,i,c=0;
	clrscr();
	printf("\n enter value:");
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			c=1;
		}
	}
	if(c==0)
		printf("%d is prime number",a);
	else
		printf("%d is not prime number",a);
	getch();
}
