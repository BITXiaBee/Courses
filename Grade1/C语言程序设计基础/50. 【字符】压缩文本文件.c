#include<stdio.h>
#include <string.h>
int oo(char x)//��ĸ�жϺ��� 
{
	if(x<='z'&&x>='a'||x<='Z'&&x>='A')return 1;
	else return 0;
}
int main()
{
	char a[100],b[5000][80];//a�ı�ÿһ�У�bѹ���ַ��������� 
	int N=1;
	while(gets(a))
	{
		int i,j;
		for(i=0;a[i]!='\0';i++)
		{
			char c[80];//c�ַ��ݴ����� 
			for(j=0;j<80;j++)c[j]='\0';
				j=0;
			if(oo(a[i]))
			{
				while(oo(a[i]))
				{
					c[j]=a[i];
					i++;
					j++;
				}
				i--;
				int g=1;
				for(j=1;j<5000;j++)//���ҵ����Ƿ���b�� 
				{
					if(strcmp(c,b[j])==0)
					{
						printf("%d",j);
						g=0;
						break;
					}
				}//�����������
				if(g)
				{
					printf("%s",c);
					strcpy(b[N],c);
					N++;
				}//����������ʣ����洢��b 
			}
			else printf("%c",a[i]);
		}
		printf("\n");
	}
	return 0;
}
