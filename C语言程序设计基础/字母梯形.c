#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	int i,j,k=0,n;
	scanf("%d%s",&n,&c);
	for(j=0;j<n-1;j++)//�б任 
		printf(" ");
	for(j=0;j<n;j++)
	{
		k=c+j+n-1;
		A:if((k>=65)&&(k<=90))
			printf("%c",k);
		else
		{
			k-=26;
			goto A;
		}
		
	}
	printf("\n");			//��ӡ��һ�У�
	if(n!=1)
	{
			for(i=2;i<n;i++)//�ڶ����Ժ� 
		{
			for(j=0;j<n-i;j++)
				printf(" ");
			
			k=c+n-i;
			B:if((k>=65)&&(k<=90))
				printf("%c",k);//���ߣ�
			else
			{
				k-=26;
				goto B;
			}
			 
			for(j=0;j<n+2*i-4;j++)//�Ұ�ߣ� 
				printf(" ");
			
				k=c+n-i+j+1;
				C:if((k>=65)&&(k<=90))
				printf("%c",k);
				else
				{
					k-=26;
					goto C;
				}
			printf("\n"); 
		}
		for(i=0;i<3*n-2;i++)//���һ�У� 
		{
			k=c+i;
			D:if((k>=65)&&(k<=90))
			printf("%c",k);
			else
			{
				k-=26;
				goto D;
			}
		}
		printf("\n");
	}
	return 0; 
 } 
