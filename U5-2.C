#include<stdio.h>
#include<conio.h>

long int fact(int n)
{
		long int f=1,i;
		for(i=1;i<=n;i++)
					f=f*i;
		return f;
}

void main()
{
		long int n;
		clrscr();


		printf("Enter number:");
		scanf("%ld",&n);

		printf("fact = %ld",fact(n));

		getch();
}