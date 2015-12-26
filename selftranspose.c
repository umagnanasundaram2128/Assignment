#include<stdio.h>
int a[10][10];
void swap(int i,int j)
{
	a[i][j]+=a[j][i];
	a[j][i]=a[i][j]-a[j][i];
	a[i][j]-=a[j][i];
}
int main()
{
	int i,j,n;
	printf("Enter the order of matrix 'n':");
	scanf("%d",&n);
	printf("Enter the matrix elements:");
	for(i=0;i<n;i++)	
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i<j) 
			{
				swap(i,j);
			}
		}
	}

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
