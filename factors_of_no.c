#include<stdio.h>
//factors of c in a
//dfjjdaffdhafadhfdjkhf

int main()
{
	int n,i;
	printf("Enter the number\n");
	scanf("%d",&n);
	printf("Factors of %d\n",n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			printf("%d ",i);
	}
}
