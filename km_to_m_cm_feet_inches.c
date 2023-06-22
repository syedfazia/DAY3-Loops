#include<stdio.h>
#include<stdlib.h>
int main()
{
	float km,m,cm,feet,inches;
	printf("Enter the distance in kilometers\n");
	scanf("%f",&km);
	m=km*1000;
	cm=km*100000;
	feet=km*3280.8;
	inches=km*39370.1;
	printf("%.2fkm=%.2fm\t%.2fcm\t%.2ffeet\t %.2finches\n",km,m,cm,feet,inches);
}
