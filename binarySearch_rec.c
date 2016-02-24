#include "stdio.h"
int binarysearch(int a[],int n,int start,int end)
{ 
	int m;
	if (start > end)
	{
		return -1;
	}
	m=(start+end)/2;
	if(n==a[m])
	{ 
		return m;
	}
	if(n<a[m])
	{
		binarysearch(a,n,start,m-1);
	}
	else
	{
		binarysearch(a,n,m+1,end);
	}
}

int main()
{
	int a[10],i,key,n,index;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&key);
	index=binarysearch(a,key,0,n-1);
	printf("%d\n",index);
	return 0;
}
