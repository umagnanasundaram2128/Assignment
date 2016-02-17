#include<stdio.h>
int main()
{
	int n,s,d,i;
	scanf("%d",&n);
	scanf("%d",&s);
	scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		printf("%d,",s);
		s=s+d;
	}
	printf("\b");
	return 0;
}
