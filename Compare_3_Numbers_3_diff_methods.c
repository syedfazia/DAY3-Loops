#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter 3 Numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("Using Nested conditional statements\n");
	if(a>b)
	{
		if(a>c)
			printf("a=%d is greater\n",a);
		else
			printf("c=%d is greater\n",c);
	}
	else
	{
		if(b>c)
			printf("b=%d is greater\n",b);
		else
			printf("c=%d is greater\n",c);
	}
	printf("Using else if ladder\n");
	if(a>b && a>c)
		printf("a=%d is greater\n",a);
	else if(b>a && b>c)
		printf("b=%d is greater\n",b);
	else
		printf("c=%d is greater\n",c);
	printf("Using Ternary Operator\n");
	if ((a>b && a>c) ? printf("a=%d is greater\n",a):(if(b>a && b>c)?printf("b=%d is greater\n",b):printf("c=%d is greater\n",c)));	
}
