#include<stdio.h>
int nextprime(int number)
{
	int flag=1,i,half,count;
	if(number<2)
	{
		return 2;
	}
	while(flag>0)
	{
		number++;
		count=0;
		half=number/2;
		for(i=2;i<=half;i++)
		{
			if(number%i==0)
			{
				flag=1;
				count=1;
				break;
			}
			
			
		}
		if(count==0)
		{
			flag=0;
		}
	}
	return number;
}
int main()
{
	int number,n;
	scanf("%d",&number);
	n=nextprime(number);
	printf("%d",n);
	return 0;
}
