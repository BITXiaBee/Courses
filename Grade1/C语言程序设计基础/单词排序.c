#include<stdio.h>
#include<string.h> 
#define N 10
#define M 5 
int main(int argc,char *argv)
{
	char str[M][N];
	char string[N];		//���ڽ������������� 
	int i,j;
	for(i=0;i<M;i++)
		gets(str[i]);
	for(j=0;j<M-1;j++)
		for(i=0;i<M-1-j;i++)	//�������е��ʣ�����str 
			if(strcmp(str[i],str[i+1])<0)	
			{
				strcpy(string,str[i]);
				strcpy(str[i],str[i+1]);
				strcpy(str[i+1],string);		//�Ƚ�str��С 
			}
	for(i=0;i<M;i++)
		puts(str[i]);		//���str 
	return 0;
	} 
