#include<stdio.h>
int main()
{
	int n,rev=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	int num=n;
	while(n>0)
	{
		int dig=n%10;
		rev=rev*10+dig;
		n=n/10;
	}
	if(rev==num?printf("%d is Palindrome Number\n",num):printf("%d is not a Palindrome Number\n",num));
	return 0;
}
