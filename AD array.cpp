#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,j,temp;
	
	printf("\n enter 5 element\n");
	for(i=0; i<5; i++)
	{
		printf("\n enter %d element:",i);
		scanf("%d",&a[i]);
	}
	printf("\n array element are\n");
	for(i=0; i<5; i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	//Ascending order
	for(i=0; i<5-1; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if (a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n array elements are in ascending order\n");
	for(i=0; i<5; i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	for(i=0; i<5; i++)
	{
		for(j=i+1; j<5; j++)
		{
			if (a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n array elements are in descending order\n");
	for(i=0; i<5; i++)
	{
		printf("\na[%d]=%d",i,a[i]);
	}
	getch();
}
