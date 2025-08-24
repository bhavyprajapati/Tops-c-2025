#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,ans,choice;
	printf("\nEnter A: ");
	scanf("%d",&a);
	printf("\nEnter B: ");
	scanf("%d",&b);
	
	printf("\n 1.Addition");
	printf("\n 2.Subtraction");
	printf("\n 3.Multiplication");
	printf("\n 4.Division");
	
	printf("\n\n Enter your choice: ");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("\nAddition: %d",ans);
			break;
		case 2:
			ans=a-b;
			printf("\nSubtration: %d",ans);
			break;
		case 3:
			ans=a*b;
			printf("\nMultiplication: %d",ans);
			break;
		case 4:
			ans=a/b;
			printf("\nDivision: %d",ans);
			break;
		default:
			printf("\n invalid choice");
			break;	
	}
	getch();
}
