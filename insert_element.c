#include<stdio.h>
int main()
{
	int a[10];
	int n,val,ind,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Value:");
	scanf("%d",&val);
	printf("Index:");
	scanf("%d",&ind);
	for(i=n-1;i>=ind;i--)
	{
		a[i+1]=a[i];
	}
	a[ind]=val;
	printf("\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	return 0;
}
