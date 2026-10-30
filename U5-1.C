//WAP to find out addition of two values using UDF
#include<stdio.h>
#include<conio.h>


				int add(int a,int b)
				{
								return a+b;
				}
				void main()
				{
							int x,y,sum;

							printf("Enter two values:");
							scanf("%d%d",&x,&y);

							sum = add(x,y);

							printf("add + %d",sum);

							getch();
				}