/*write a program to enter any number and check it is pallindrome number*/
#include<stdio.h>
#include<conio.h>
  void main()
{
	int a,b=0,c;
	clrscr();
	printf("Enter a number to reverse:\n");
	scanf("%d",&a);
	while(a!=0)
	{
		b+b*10;
		b=b+a%10;
		a=a/10;
	}
	if(c=b)
		printf("%d is a pallindrome number",c);
	else
		printf("%d is not a pallindrome number",c);
	getch();
}