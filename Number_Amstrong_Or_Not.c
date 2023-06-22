#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Enter 3 digit number\n");
	scanf("%d",&n);
	int temp=n,res=0;
	while(temp>0)
	{
		int dig=temp%10;
		res=res+dig*dig*dig;
		temp=temp/10;
	}
	if(res==n?printf("%d is an Amstrong Number\n",n):printf("%d is Not an Amstrong Number\n",n));
}
