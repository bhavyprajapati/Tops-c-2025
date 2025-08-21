#include<stdio.h>
#include<conio.h>

int main()
{
	int rno,s1,s2,s3,total;
	double per;
	char sname[50];
	printf("\n Enter student name: ");
	gets(sname);
	printf("\n Enter Roll no:");
	scanf("%d",&rno);
	printf("\n Enter marks of subject 1 :");
	scanf("%d",&s1);
	printf("\n Enter marks of subject 2 :");
	scanf("%d",&s2);
	printf("\n Enter marks of subject 3 :");
	scanf("%d",&s3);
	total=s1+s2+s3;
	per=total/3;
	printf("\n student name: %s",sname);
	printf("\n Roll no %d",rno);
	printf("\n total %d",total);
	printf("\n percentage %lf",per);
	if(per>=70)
	{
		printf("\n Destriction");
	}
	else if(per>=60)
	{
		printf("\n First Class");
	}
 	else if(per>=50)
	{
		printf("\n Second Class");
	}
	else if(per>=40)
	{
		printf("\n Pass");
	}
	else
	{
		printf("\n Fail");
	}
	getch();
}
