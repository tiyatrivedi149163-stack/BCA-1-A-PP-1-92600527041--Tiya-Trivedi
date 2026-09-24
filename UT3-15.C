//WAP which display resul
#include<stdio.h>
#include<conio.h>

void main()
{
	int rno,s1,s2,s3,s4,s5,total;
	float per;
	clrscr();
	printf("\n Enter your Rollon :");
	scanf("%d",&rno);

	printf("\n Enter five subject marks :");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

	total = s1+s2+s3+s4+s5;
	per = total /5;
	printf("\n Total is:%d",total);
	printf("\n percentage is : %f",per);

	if(s1 >=35 && s2 >=35 && s3 >=35 && s4 >=35 && s5 >=35)
	{
		printf("\n Result : Pass");
	}
	else
	{
		printf("\n Result : Fail");
	}

	if(per >=70 && per <=100)
	{
		printf("\n Distinction");
	}
	else if(per >=60)
	{
		printf("\n First class");
	}
	else if(per >=50)
	{
		printf("\n Second class");
	}
	else if(per >=35)
	{
		printf("\n PASS Class");
	}
	else
	{
		printf("\n *****");
	}
	getch();
}