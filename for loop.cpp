/*#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	for(i=1;i<=5;i++)
	{
		printf("%d\n",i);
	}
	getch();
}*/
/**************************************************************/
/*#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	for(i=3;i<=30;i+=3)
	{
		printf("%d\n",i);
	}
	getch();
}*/
/*******************************************************************/
/*#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j;
	for(i=0; i<=10; i++)
	{
		for(j=0; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}*/
/*********************************************************************/
#include<stdio.h>
#include<conio.h>

int main()
{
	int i,j,k;
	for(i=0; i<10; i++)
	{
		for(k=0; k<9-i; k++)
		{
			printf(" ");
		}
		for(j=0; j<=i; j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	getch();
}





