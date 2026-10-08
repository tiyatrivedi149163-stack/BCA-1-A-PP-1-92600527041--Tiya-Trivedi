//WAP that print 1 3 5 7...N
#include<stdio.h>
#include<conio.h>

void main()
{
		int i,N;
		clrscr();

		printf("\d Enter value of N:");
		scanf("%d",&N);

		for(i=1;i<=N;i=i+2)
		{
				printf("%d",i);
		}
		getch();
}