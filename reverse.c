#include<stdio.h>
void rev(int num)
{
	int remainder,rev_num=0;
	while(num>0)
	{
		remainder=num%10;
		num=num/10;
		rev_num=remainder+(rev_num*10);
	}
	printf("\n%d",rev_num);
}

int main()
{
	int num;
	scanf("%d",&num);
	rev(num);
	return 0;
}
