#include <stdio.h>
#define M 5
#define N 50
int main()
{
	int b[N]={0},*pb=b,i,x;
	char a[N]={0},temp[M]={0};
	char *q=a,*p=a,*pt=temp;
	
	
	gets(a);//�����������飻 
	while(*++q);
	while(p<q)
	{
		if(*p!=' ')//��ȥ�ո� 
		{
			if(*p<='9'&&*p>='0')//��¼�������ݣ� 
			{
				*pt=*p;
				if(*(p+1)==' ')
				{
					for(x=1;pt>temp;pt--,x*=10)
						*pb+=(*pt-48)*x;
					*pb+=(*pt-48)*x;
					pb++;
				}
				else
					pt++;
			}
			else
			{
				switch(*p)
				{
					case '+':*(pb-2)=*(pb-2)+*(pb-1);*--pb=0;break;
					case '-':*(pb-2)=*(pb-2)-*(pb-1);*--pb=0;break;
					case '*':*(pb-2)=*(pb-2)*(*(pb-1));*--pb=0;break;
					case '/':*(pb-2)=*(pb-2)/(*(pb-1));*--pb=0;break;
				}
			}
		}
		p++;
	}
	printf("%d\n",*b);
	return 0;
}
