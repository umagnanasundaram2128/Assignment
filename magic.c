#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int order,i,j;
    int **array;
    int up=0,right,square,number;
	printf("Enter the order of the matrix:");
	scanf("%d",&order);
	array=malloc(order*sizeof(int *));
	for(i=0;i<order;i++)
	{
		array[i]=malloc(order*sizeof(int *));
	}
	right=order/2;
	square=order*order;
    if(order%2!=0)
    {
        for (number=1;number<=square;)
        {
            if (up==-1 && right==order) 
            {
                right=order-1;
                up=1;
            }
            else
            {
                if (right==order)
				{
		            right=0;
				}
                if (up==-1)
				{
                    up=order-1;
				}
            }
            if (array[up][right])
            {
                right=right-1;
                up=up+2;
                continue;
            }
            else
            {
                array[up][right]=number++; 
            }
            right++; 
            up--;
        }
        printf("\n");
        for(i=0;i<order;i++)
        {
            for(j=0;j<order;j++)
            {
                printf("%d\t ",array[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
    	printf("No magic square is possible in this method");
    }
	for(i=0;i<order;i++)
	{
		free(array[i]);
	}
	free(array);
	return 0;
}
