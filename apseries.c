#include<stdio.h>
int main()
{
	int n,s,d,i;
	printf("N:");
	scanf("%d",&n);
	printf("\nS:");
	scanf("%d",&s);
	printf("\nD:");
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		printf("%d,",s);
		s=s+d;
	}
	printf("\b");
	return 0;
}
