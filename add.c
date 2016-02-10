#include<stdio.h>
int add(int a,int b,int c)
{
	return(a+b+c);
}
int main()
{
	int a,b,c,sum;
	int array[3];
	scanf("%d%d%d",&a,&b,&c);
	sum=a+b+c;
	printf("%d\n",sum);
	sum=add(a,b,c);
	printf("%d\n",sum);
	scanf("%d%d%d",&array[0],&array[1],&array[2]);
	sum=array[0]+array[1]+array[2];
	printf("%d\n",sum);
	return 0;
}
