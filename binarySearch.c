#include<stdio.h>
int binarysearch(int a[],int key,int start,int end)
{
	int middle;
	while (start<=end) 
	{
		middle = (start+end)/2;
		if (a[middle]<key)
		{
			start = middle + 1;    
		}
		else if (a[middle] == key) 
		{
			return middle;
		}
		else
		end= middle - 1;
	}
return -1;
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
	index=binarysearch(a,key,0,n);
	printf("%d\n",index);
	return 0;
}
