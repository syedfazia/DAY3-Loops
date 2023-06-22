#include<stdio.h>
#define TRUE 1
#define FALSE 0
int main()
{
	int n,a,b,res;
	printf("Opcode\n");
	printf("1- '+'\n");
	printf("2- '-'\n");
	printf("3- '*'\n");
	printf("4- '/'\n");
	printf("5- '%'\n");
	printf("6- '>'\n");
	printf("7- '<'\n");
	printf("8- '>='\n");
	printf("9- '<='\n");
	printf("10- '=='\n");
	printf("11- '!='\n");
	printf("12- '&&'\n");
	printf("13- '||'\n");
	printf("14- '!'\n");
	printf("15- '++'\n");
	printf("16- '--'\n");
	printf("17- '&'\n");
	printf("18- '|'\n");
	printf("19- '^'\n");
	printf("20- '<<'\n");
	printf("21- '>>'\n");
	printf("22- '~'\n");
	scanf("%d",&n);
	if(n==1)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a+b;
		printf("sum=%d",res);
	}
	else if(n==2)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a-b;
		printf("subtraction=%d",res);
	}
	else if(n==3)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a*b;
		printf("Multiplication=%d",res);
	}
	else if(n==4)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a/b;
		printf("Division=%d",res);
	}
	else if(n==5)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a%b;
		printf("Modulus=%d",res);
	}
	else if(n==6)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a>b;
		if(res?printf("a=%d is greater\n",a):printf("b=%d is greater\n",b));
	}
	else if(n==7)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a<b;
		if(res?printf("a=%d is smaller\n",a):printf("b=%d is smaller\n",b));
	}
	else if(n==8)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a>=b;
		if(res?printf("a=%d is greater than equal to b =%d\n",a,b):printf("b=%d is greater than equal to b=%d\n",b,a));
	}
	else if(n==9)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a<=b;
		if(res?printf("a=%d is lessthan equal to b =%d\n",a,b):printf("b=%d is lesssthan equal to b=%d\n",b,a));
	}
	else if(n==10)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a==b;
		if(res?printf("a=%d is equal to b =%d\n",a,b):printf("b=%d is not equal to b=%d\n",a,b));
	}
	else if(n==11)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a!=b;
		if(res?printf("a=%d is not equal to b =%d\n",a,b):printf("b=%d is equal to b=%d\n",a,b));
	}
	else if(n==12)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a&&b;
		if(res?printf("True"):printf("False"));
	}
	else if(n==13)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a||b;
		if(res?printf("True"):printf("False"));
	}
	else if(n==14)
	{
		printf("Enetr the value\n");
		scanf("%d",&a);
		res=!a;
		printf("Not of a=%d is %d \n",a,res);
	}
	else if(n==15)
	{
		printf("Enetr the value\n");
		scanf("%d",&a);
		res=++a;
		printf("a=%d is\n",res);
	}
	else if(n==16)
	{
		printf("Enetr the value\n");
		scanf("%d",&a);
		res=--a;
		printf("a=%d is\n",res);
	}
	else if(n==17)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a&b;
		printf("%d\n",res);
	}
	else if(n==18)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a|b;
		printf("%d\n",res);
	}
	else if(n==19)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a^b;
		printf("%d\n",res);
	}
	else if(n==20)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a<<b;
		printf("%d\n",res);
	}
	else if(n==21)
	{
		printf("Enetr the a and b values\n");
		scanf("%d %d",&a,&b);
		res=a>>b;
		printf("%d\n",res);
	}
	else if(n==22)
	{
		printf("Enetr the value\n");
		scanf("%d",&a);
		res=~a;
		printf("a=%d is\n",res);
	}
	else
		printf("Invalid Input\n");
}
