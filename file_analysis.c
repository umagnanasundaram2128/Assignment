#include<stdio.h>
#include<stdlib.h>
void count(int *letter_count,int *symbol_count,int *total_count,int *space_count,int *newline_count,int *word_count,int *digit_count,int letter[])
{
	FILE *fp;
	fp=fopen("kalam.txt","r");
	char ch;
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		(*total_count)++;
		if(((ch >=65)&&(ch <= 90))||((ch>=97)&&(ch<= 122)))
		{
			(*letter_count)++;
			letter[ch-'a']++;
		}
		else if(ch==' ')
		{
			(*space_count)++;
		}
		else if((ch>='0')&&(ch<='9'))
		{
			(*digit_count)++;
		}
		else if(ch=='\n')
		{
			(*newline_count)++;
		}
		ch=fgetc(fp);	 
	}
	*symbol_count= *total_count - *letter_count - *digit_count -*space_count -*newline_count;
	*word_count = *space_count+1;
	fclose(fp);
}

void print(int array[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c\n",array[i]+65);
	}	
}
void unused(int letter[])
{
	int i;
	for(i=0;i<26;i++)
	{
		if(letter[i]==0)
		{
			printf("%c\n",i+65);
		}
	}
}
void copy(int letter[],int dup[])
{
	int i;
	for(i=0;i<26;i++)
	{
		dup[i]=letter[i];
	}
}	
void top3_letter(int dup[])
{
	int max,max_i,i;
	int count=0;
	for(count=0;count<3;count++)
	{
		max=0;
		for(i=0;i<26;i++)
		{
			if(max<dup[i])
			{
				max=dup[i];
				max_i=i;
			}
		}
		printf("%d most used letter : %c\n",count,max_i+65);
		dup[max_i]=0;	
	}   
}
int main()
{
	int letter_count=0,symbol_count=0,total_count=0,space_count=0,word_count=0,digit_count=0,newline_count=0;
	int dup[26];
	int letter[26]={0};
	count(&letter_count,&symbol_count,&total_count,&space_count,&newline_count,&word_count,&digit_count,letter);
	unused(letter);
	printf("Letter Count : %d\n",letter_count);
	printf("Symbol count : %d\n",symbol_count);
	printf("Digit count : %d\n",digit_count);
	printf("Words count : %d\n",word_count);
	printf("Newline count: %d\n",newline_count);
	copy(letter,dup);
	top3_letter(dup);
	return 0;

}
