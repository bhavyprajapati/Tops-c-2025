#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	printf("\n Enter A: ");
	scanf("%d",&a);
	if(a%2==0)
	{
		printf("\n A is even number");
	}
	else
	{
		printf("\n A is odd number");
	}
	getch();
	return 0;
}
