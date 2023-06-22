#include<stdio.h>
#define n 5
int main()
{
	int i,j,k;
	char ch;
	for(i=1;i<=n;i++)
	{
		ch='A';
		for(k=1;k<=n-i+1;k++)
		{
			printf("%c",ch);
			ch++;
		}
		while(k<=n)
		{
			printf(" ");
			k++;
		}
		if(i==1){
			ch--;
		}
		for(j=1;j<i-1;j++)
			printf(" ");
		while(j<=n-1)
		{
			ch--;
			printf("%c",ch);
			j++;
		}
		
		printf("\n");
	}

}
