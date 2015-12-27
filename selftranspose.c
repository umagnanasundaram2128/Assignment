#include<stdio.h>
int a[10][10];
int n,m;
void swap(int i,int j)
{
	a[i][j]+=a[j][i];
	a[j][i]=a[i][j]-a[j][i];
	a[i][j]-=a[j][i];
}
void print(int a[])
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int i,j;
	printf("Enter the order of matrix 'm' and 'n':");
	scanf("%d%d",&m&n);
	printf("Enter the matrix elements:");
	for(i=0;i<m;i++)	
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j) 
			{
				swap(i,j);
			}
		}
	}
	print(a);
	
	return 0;
}
