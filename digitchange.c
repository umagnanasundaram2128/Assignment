#include<stdio.h>
int power(int a,int n)
{
	int i,p=a;
	for(i=1;i<n;i++)
	{
		p=p*a;
	}
	return p;
}	
int tocompletenum(int first,int mid,int sec,int half)
{
	int res;
	res=(sec*power(10,half))+(mid*power(10,half-1))+first;
	return res;
}

int main()
{
	int num,copy,count=0,half,mid,sec_part,first_part,res;
	scanf("%d",&num);	
	copy=num;
	while(copy!=0)
	{
		copy=copy/10;
		count++;		
	}
	copy=num;
	half=count/2;		
	sec_part=num%power(10,half);	
	first_part=num/power(10,half);	 
	if(count%2==0)
	{
		mid=0;
	}
	else
	{
		mid=first_part%10;
		first_part=first_part/10;
		half++;
	}
	res=tocompletenum(first_part,mid,sec_part,half);
	printf("%d\n",res);
	return 0;
}
