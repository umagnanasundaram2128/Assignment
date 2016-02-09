#include<stdio.h>
#include<stdlib.h>
struct students
{
	int serial_no;
	char name[50];
	int mark[5];
}*s;
int main()
{
	float avg[5]={0};
	char title[7][30],*top[5];
	int strength=0,i,j,max;
	char ch;
	FILE *fp;
	fp=fopen("final.csv","r");
	if(fp!=NULL)
	{
		ch=fgetc(fp);
		while(ch!=EOF)
		{
			if(ch=='\n')
			{
				strength++;
			}
			ch=fgetc(fp);
		}
		strength--;
		s=(struct students *)malloc(strength*sizeof(struct students));
		rewind(fp);
		for(i=0;i<6;i++)
		{
			fscanf(fp,"%[^,],",title[i]);
		}
		fscanf(fp,"%[^\n]",title[i]);
		for(i=0;i<strength;i++)
		{
			fscanf(fp, "%d,%[^,],%d,%d,%d,%d,%d",&s[i].serial_no,s[i].name,&s[i].mark[0],&s[i].mark[1],&s[i].mark[2],&s[i].mark[3],&s[i].mark[4]);
		}
		for(i=0;i<5;i++)
		{
			for(j=0;j<strength;j++)
			{
				avg[i]=s[j].mark[i]+avg[i];
			}
			avg[i]=avg[i]/strength;
		}
		for(i=0;i<5;i++)
		{
			printf("%s : %f\n",title[i+2],avg[i]);
		} 
		for(i=0;i<5;i++)
		{
			max=0;
			for(j=0;j<strength;j++)
			{
				if(max<s[j].mark[i])
				{
					max=s[j].mark[i];
					top[i]=s[j].name;
				}
			}
		}
		printf("Top scorers:\n");
		for(i=0;i<5;i++)
		{
			printf("%s : %s\n",title[i+2],top[i]);
		}
	}
	return 0;
}
