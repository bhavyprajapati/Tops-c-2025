#include<stdio.h>
#include<conio.h>

int main()
{
	int a[10],i;
	printf("\n enter arry element\n");
	for(i=0; i<10; i++)
	{
		printf("enter %d element :",i);
		scanf("%d",&a[i]);
	}
	printf("\narry element are:");
	for(i=0; i<10; i++)
	{
		printf("\n A[%d] = %d",i,a[i]);
	}
	getch();
}																														
