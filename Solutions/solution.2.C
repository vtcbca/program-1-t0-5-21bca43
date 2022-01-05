/*write a program to enter any number and print sum of its digit*/
#include<stdio.h>
#include<conio.h>
  void main()
{
	int c,n,sum=0;
	clrscr();
	printf("\n Enter value:",n);
	scanf("%d",&n);
	while(n>0)
	{
		c=n%10;
		sum=sum+c;
		n=n/10;
	}
		printf("\n sum is=%d",sum);
	getch();
}