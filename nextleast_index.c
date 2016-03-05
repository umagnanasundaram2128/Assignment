#include<stdio.h>
int get_index(int a[],int n,int num)
{
	int i,ind=-1;
	for(i=0;i<n;i++)
	{
		if(a[i]>num)
		{
			if(a[i]<a[i+1])
			{
				ind=i;
				break;
			}
			if(a[i]==a[i+1])
			{
				ind=i+1;
				break;
			}
		}
	}
	return ind;
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
