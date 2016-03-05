#include<stdio.h>
int main()
{
	int a[26]={0};
	int count[10]={0},i,diff,var_c=0;
	char str[10];
	int n;
	scanf("%s",str);
	for(n=0;str[n]!='\0';n++);
	for(i=0;i<n;i++)
	{
		if((str[i]<='Z')&&(str[i]>='A'))
		{
			diff=str[i]-'A';
			if(count[diff]==0)
			{
				count[diff]=1;
				var_c++;
			}
		}
	}
	printf("%d\n",var_c);
	return 0;
}
