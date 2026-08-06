//swapping 2 numbers without using third variable
//Tiya Trivedi

#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;

	printf("Enter two numbers:");
	scanf("%d %d",&a,&b);

	printf("Befor swapping:a=%d,b=%d\n",a,b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("After swapping:a=%d,b=%d\n",a,b);
	getch();
}