#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,flag=1;
	printf("Enter the Number\n");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag?printf("%d is Prime\n",n):printf("%d is Not Prime\n",n));
}
