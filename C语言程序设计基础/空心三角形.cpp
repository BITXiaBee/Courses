#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;++i) 
	{
		for(j=1;j<=n-i;++j) 
		{
			printf(" "); // n-i���ո� 
		}
		if(i==1)
		{
			printf("*"); // һ��* 
		}else if(i==n)
		{
			for(j=1;j<=2*n-1;++j)
			{
				printf("*"); // 2*n-1���ո� 
			}
		}else // ���˵�һ�������һ�е������� 
		{
			printf("*"); // һ��* 
			for(j=1;j<=2*i-3;++j)  
			{
				printf(" "); // 2*n-3���ո� 
			}
			printf("*"); // һ��* 
		}
		printf("\n"); // ÿ�еĻ��з� 
	}
}


