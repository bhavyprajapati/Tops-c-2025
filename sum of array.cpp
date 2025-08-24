#include<stdio.h>
#include<conio.h>
 int main()
 {
 	int a[10],i,sum=0;
 	printf("\n enter array element\n");
 	for(i=0;i<=9; i++)
 	{
 		printf("\n enter %d element:",i+1);	
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
			
		printf("\n sum of array element = %d",sum);
		getch();
 }	
