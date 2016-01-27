#include<stdio.h>
int countbits(int number)
{
	int count=0;
	while(number!=0)
	{
		number=number/2;
		count++;
	}
	return count;
}
int main()
{
	int count,number;
	scanf("%d",&number);
	count=countbits(number);
	printf("\n%d\n",count);
	return 0;
}
