#include<stdio.h>
#include<math.h>
#define n 100
int main()
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		int flag=1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				flag=0;
				break;
			}
		}
		if(flag)
			printf("%d ",i);
	}
}
