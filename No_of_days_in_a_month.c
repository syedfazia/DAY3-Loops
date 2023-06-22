#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number between 1 to 12\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d Month has 31 days\n",n);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("%d Month has 30 days\n",n);
			break;
		case 2:	
			printf("%d Month has 28 or 29 days\n",n);
			break;
		default:
			printf("Invalid Input\n");
	}
}
