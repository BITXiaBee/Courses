#include<stdio.h>
char charAdd(char ch) 
{
	return ch = (ch+1-'A')%26+'A';
}
char charMinus(char ch) 
{
	return ch = (ch-1-'A'+26)%26+'A';
}
int main() 
{
	int i,j,n,ch;
	scanf("%d %c",&n,&ch);
	for(i=1;i<=n;++i) 
	{
		for(j=1;j<=n-i;++j)
			printf(" "); // n-i�����ո� 
		if(i==1) { //��һ�� 
			printf("%c",ch); // һ����ĸ 
			ch=charAdd(ch); 
		}
		else if(i==n) //���һ�� 
		{
			for(j=1;j<=n-1;++j) { //������� 
				printf("%c",ch);
				ch=charAdd(ch);
			}
			printf("%c",ch); // �м����ĸ 
			ch=charMinus(ch); // ������ĸ 
			for(j=n-1;j>=1;--j) { //������� 
				printf("%c",ch);
				ch=charMinus(ch);
			}
		}else //�м��� 
		{
			printf("%c",ch); // ����Ǹ���ĸ 
			for(j=1;j<=2*i-3;++j)
				printf(" "); // 2*i-3���ո� 
			printf("%c",ch); // �ұ��Ǹ���ĸ 
			ch=charAdd(ch);
		}
		printf("\n");
	}
}


