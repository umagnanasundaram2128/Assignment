#include<stdio.h>
#include<stdlib.h>
int erow,ecol;
void print(int array[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		printf("-------------------------------------------------\n|");
		for(j=0;j<3;j++)
		{
			if(array[i][j])
			{
				printf("\t%d\t|",array[i][j]);
			}
			else
			{
				printf("\t \t|");
			}
		}
		printf("\n");
	}
	printf("-------------------------------------------------\n");
}
void findblank(int array[][3])
{
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(array[i][j]==0)
			{
				erow=i;
				ecol=j;
			}
		}
	}
}
void swap(char direction,int array[][3])
{
	int t,i,j;
	switch(direction)
	{
		case 'U':i=erow-1;
				 j=ecol;
				 break;
		case 'D':i=erow+1;
				 j=ecol;
				 break;
		case 'L':i=erow;
				 j=ecol-1;
				 break;
		case 'R':i=erow;
				 j=ecol+1;
				 break;
		default:printf("Enter the valid direction.....\n");
	}
	if((i!=-1)&&(i!=3)&&(j!=-1)&&(j!=3))
	{
		t=array[erow][ecol];
		array[erow][ecol]=array[i][j];
		array[i][j]=t;
	}
}
int check(int array[][3])
{	
	int flag=0;
	int num=1;
	int i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{	
			if(array[i][j]==num)
   			{
   	        		num++;
   	        		if(num==9)	
				{
					flag=1;
   	            			break;
				}
  	       		}
   		 	else
   	       		{
   	           		flag=0;
   	           		break;
   		  	}
		}
	}
	return flag;
}	
int main()
{
	int array[3][3]={{1,2,3},{4,5,0},{7,8,6}};
	int flag;
	char direction;		
	print(array);
	printf("Use UpperCase Only\n");
	printf("U for Up,D for Down,L for Left,R for right,Q to quit\n");
	printf("Enter the direction:\n");
	direction = getchar();
	getchar();
		
	do
	{
		if(direction=='Q')
		{
			printf("You Gave up");
			return 0;
		}
		system("clear");
		findblank(array);
		swap(direction,array);
		print(array);
		flag=check(array);
		if(flag==1)
		{
			printf("\nCongrats!!You won :)\n");
			return 0;
		}

		printf("Use UpperCase Only\n");
		printf("U for Up,D for Down,L for Left,R for right,Q to quit\n");
		printf("Enter the direction:\n");
		direction = getchar();
		getchar();
		
		
		
	}while(1);
	
	return 0;
}
