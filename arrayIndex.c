#include<stdio.h>
int findIndex(int array[],int val,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(array[i]==val)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int n,val,array[10],index,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	scanf("%d",&val);
	index=findIndex(array,val,n);
	printf("%d\n",index);
	return 0;
}
