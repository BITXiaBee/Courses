#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a;
	int i=1,j,n;
	scanf("%d %c",&n,&a);
	if(a<65||a>90)
		printf("input error.\n");  
	else
	{
		while(i<=2*n-1)//����X�� 
		{
			j=1;
			if(i<=n)//�����ǣ� 
			{
				while(j<=2*n-i)//ÿһ�в��� �� 
				{
					if(j==i||j==2*n-i)//�����ĩ�
						if(a+n-i>90) 
							printf("%c",a-26+n-i);
            			else 
							printf("%c",a+n-i); 
					else
						printf(" ");
					j++;
				}
			}
			else//�����ǣ� 
			{
				while(j<=i)//ÿһ�в��� �� 
				{
					if(j==i||j==2*n-i)//�����ĩ�
						if(a+n-i<65) 
							printf("%c",a+26+n-i);
            			else 
							printf("%c",a+n-i); 
					else
						printf(" ");
					j++;
				}
			}
		printf("\n"); 
		i++;  
		}
	}
	return 0;
}
