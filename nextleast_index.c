#include<stdio.h>
int get_index(int a[],int n,int num)
{
	int i,j;
	int nextnum;
	for(i=0;i<n;i++)
	{
		if(a[i]>num)
		{
			nextnum=a[i];
			break;
		}
	}
	for(j=i;j<n;j++)
	{
		if(a[j]>nextnum)
		{
			break;
		}
	}
	if(j==n)
	{
		return -1;
	}
	return j;
}
int main()
{
	int a[10],index,num,i=0,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("X:");
	scanf("%d",&num);
	index=get_index(a,n,num);
	printf("%d\n",index);
	return 0;
}
