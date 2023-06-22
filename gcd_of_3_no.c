#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	while(a%b!=0)
	{
		int res=a%b;
		a=b;
		b=res;
	}
	while(b%c!=0)
	{
		int res=b%c;
		b=c;
		c=res;
	}
	printf("Gcd of a,b and c =%d\n",c);
}

