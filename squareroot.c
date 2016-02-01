#include<stdio.h>
int main()
{
    float number,guess_num,accuracy,answer,y;
    scanf("%f",&number);
    scanf("%f",&accuracy);
	guess_num=number;
	y=1;
	while((guess_num-y)>accuracy)
	{
		guess_num=(guess_num+y)/2;
		y=number/guess_num;
	}
    printf("Square root of %f is %f",number,guess_num);
}
