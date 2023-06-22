#include<stdio.h>
int main()
{
	char opcode;
	int a,b,res;
	printf("Enter The Opcode\n");
	scanf("%c",&opcode);
	switch(opcode)
	{
		case '+':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a+b;
			printf("sum=%d",res);
			break;
		case '-':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a-b;
			printf("subtraction=%d",res);
			break;
		case '*':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a*b;
			printf("Multiplication=%d",res);
			break;
		case '/':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a/b;
			printf("Division=%d",res);
			break;
		case '%':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a%b;
			printf("Modulus=%d",res);
			break;
		case '>':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a>b;
			if(res?printf("a=%d is greater\n",a):printf("b=%d is greater\n",b));
			break;
		case '<':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a<b;
			if(res?printf("a=%d is smaller\n",a):printf("b=%d is smaller\n",b));
			break;
		case '>=':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a>=b;
			if(res?printf("a=%d is greater than equal to b =%d\n",a,b):printf("b=%d is greater than equal to b=%d\n",b,a));
			break;
		case '<=':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a<=b;
			if(res?printf("a=%d is lessthan equal to b =%d\n",a,b):printf("b=%d is lesssthan equal to b=%d\n",b,a));	
			break;
		case '==':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a==b;
			if(res?printf("a=%d is equal to b =%d\n",a,b):printf("b=%d is not equal to b=%d\n",a,b));	
			break;
		case '!=':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a!=b;
			if(res?printf("a=%d is not equal to b =%d\n",a,b):printf("b=%d is equal to b=%d\n",a,b));	
			break;
		case '&&':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a&&b;
			if(res?printf("True"):printf("False"));
			break;
		case '||':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a||b;
			if(res?printf("True"):printf("False"));
			break;
		case '!':
			printf("Enetr the value\n");
			scanf("%d",&a);
			res=!a;
			printf("Not of a=%d is %d \n",a,res);
			break;
		case '++':
			printf("Enetr the value\n");
			scanf("%d",&a);
			res=++a;
			printf("a=%d is\n",res);
			break;
		case '--':
			printf("Enetr the value\n");
			scanf("%d",&a);
			res=--a;
			printf("a=%d is\n",res);
			break;
		case '&':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a&b;
			printf("%d\n",res);
			break;
		case '|':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a|b;
			printf("%d\n",res);
			break;
		case '^':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a^b;
			printf("%d\n",res);
			break;
		case '<<':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a<<b;
			printf("%d\n",res);
			break;
		case '>>':
			printf("Enetr the a and b values\n");
			scanf("%d %d",&a,&b);
			res=a>>b;
			printf("%d\n",res);
			break;
		case '~':
			printf("Enetr the value\n");
			scanf("%d",&a);
			res=~a;
			printf("a=%d is\n",res);
			break;
		default:
			printf("Invalid Input\n");
						
	}
}
