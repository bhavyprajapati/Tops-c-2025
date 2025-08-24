#include<stdio.h>
#include<conio.h>

int main()
{
	int day;
	
	printf("\n Enter number between (1 to 7): ");
	scanf("%d",&day);
	
	switch (day)
	{
		case 1:
		printf("\n Sunday");
		break;
		case 2:
		printf("\n Monday");
		break;
		case 3:
		printf("\n Tuesday");
		break;
		case 4:
		printf("\n Wednesday");
		break;
		case 5:
		printf("\n Thurshday");
		break;
		case 6:
		printf("\n Friday");
		break;
		case 7:
		printf("\n Saturday");
		break;
		default:
		printf("\n Enter invalid choice \n pleas enter number between (1 to 7)");
	}
	getch();
}
