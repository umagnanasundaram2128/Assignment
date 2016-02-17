#include<stdio.h>
int main()
{
	int n,s,d,i;
	char type[4];
	scanf("%d",&n);
	scanf("%d",&s);
	scanf("%d",&d);
	scanf("%s",type);
	switch(type[0])
	{
		case 'A':
		case 'a':for(i=0;i<n;i++)
				 {
					printf("%d,",s);
					s=s+d;
				 }
				 break;
		case 'G':
		case 'g':for(i=0;i<n;i++)
				 {
					printf("%d,",s);
					s=s*d;
				 }
				 break;
		default:printf("Invalid type");
	}
	printf("\b");
	return 0;
}
