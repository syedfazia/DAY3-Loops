#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number\n");
	scanf("%d",&n);
	int ch=n%2;
	switch(ch)
	{
		case 0:printf("%d is Even Number\n",n);
				break;
		case 1:printf("%d is Odd Number\n",n);
				break;
	}
}
