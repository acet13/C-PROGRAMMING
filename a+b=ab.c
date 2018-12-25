#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,r,rev=0;
	clrscr();
	printf("enter tha a,b values",a,b);
	scanf("%d %d",&a,&b);
	while(b!=0)
	{
	 r=b%10;
	 rev=rev*10+r;
	 b=b/10;
	}
	b=rev;
	while(b!=0)
	{
	 r=b%10;
	 b=b/10;
	 a=a*10+r;
	}
	printf("%d",a);
	getch();

}