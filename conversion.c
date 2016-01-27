#include<stdio.h>
void convert(int number,int base)
{
	char array[10],remainder,i=0,j;
	while(number!=0)
	{
		remainder=number%base;
		if(remainder<10)
		{
			array[i++]=remainder+'0';
		}
		else
		{
			array[i++]=remainder+55;
		}
		number=number/base;
	}
	for(j=i-1;j>=0;j--)
	{
		printf("%c",array[j]);
	}
}
int main()
{
	int number,base;
	printf("Number:");
	scanf("%d",&number);
	printf("Base:");
	scanf("%d",&base);
	if(base<2)
	{
		printf("Invalid base");
		return 0;
	}
	convert(number,base);
	return 0;
}
	
