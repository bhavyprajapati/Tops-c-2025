#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	
	printf("\n Enter a: ");
	scanf("%d",&a);
	
	printf("\n Enter b: ");
	scanf("%d",&b);
	
	printf("\n Enter c: ");
	scanf("%d",&c);
	
	if(a>b)
	{
		if (a>c)
		{
			printf("\n a is max number");
		}
		else
		{
			printf("\n c is max number");
		}	
	}
	else
	{
		printf("\n b is max number");
	}
	
}
