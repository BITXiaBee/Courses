/*��������ַ��������ظ��ַ�����Ӵ�*/
#include<stdio.h>
#include<string.h>
#include <time.h>
#include <ctype.h>
#define N 100
char del(char c);
int main(int argc, char *argv[])
{
	
	char a[N]={0},b[N]={0};
	int i,j,k=0,p,n,m,t=0;
	gets(a);
	n=strlen(a);
	A:for(i=t;i<n;i++)
	{	
		for(j=t,p=0;j<n;j++)
		{
			if(b[j]==a[i])
				p=1;
		}
		if(p==0)
		{
			b[k]=a[i];
			k++;
		}
	}						//������ظ��ĵ�һ���Ӵ��� 
	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}		
	m=strlen(a);
	puts(a);
	t++;
		if(t!=n)
			goto A;	
		return 0;   
 } 
