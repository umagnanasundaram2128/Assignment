#include<stdio.h>
void change(int a[],int mid,int n)
{
	int i,tem;
	for(i=0;i<mid;i++)
	{
		if((i+mid)!=n)
		{
			tem=a[i];
			a[i]=a[i+mid];
			a[i+mid]=tem;
		}
	}
}
int tonum(int a[],int n)
{
	int res=0,i;
	for(i=0;i<n;i++)
	{
		res=(res*10)+a[i];
	}
	return res;
}
int main()
{
	int num,n,res,i,mid,copy,a[10];
	scanf("%d",&num);
	copy=num;
	i=0;
	while(copy!=0)
	{
		a[i++]=copy%10;
		copy=copy/10;
		n++;
	}
	copy=num;
	for(i=n-1;i>=0;i--)
	{
		a[i]=copy%10;
		copy=copy/10;
	}
	if(n%2==0)
	{
		mid=n/2;
	}
	else
	{
		mid=n/2+1;
	}
	change(a,mid,n);
	res=tonum(a,n);
	printf("%d\n",res);
	return 0;
}
