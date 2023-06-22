#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Number between 1 to 10\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("%d-ONE",n);
			break;
		case 2:
			printf("%d-TWO",n);
			break;
		case 3:
			printf("%d-THREE",n);
			break;
		case 4:
			printf("%d-FOUR",n);
			break;
		case 5:
			printf("%d-FIVE",n);
			break;
		case 6:
			printf("%d-SIX",n);
			break;
		case 7:
			printf("%d-SEVEN",n);
			break;
		case 8:
			printf("%d-EIGHT",n);
			break;
		case 9:
			printf("%d-NINE",n);
			break;
		case 10:
			printf("%d-TEN",n);
			break;
		default:
			printf("Invalid input\n");
			
			
	}
	
}
