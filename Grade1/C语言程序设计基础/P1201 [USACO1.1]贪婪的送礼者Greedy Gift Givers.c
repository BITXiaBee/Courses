#include<stdio.h>
#include<string.h>
typedef struct
{
	char name[14];
	int value;
}st;
int main()
{
	st people[10];
	char name[14];//���ڼ�¼����Ǯ���� 
	int i,p,q,money,children,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",people[i].name);
		people[i].value=0;//���㣻 
	}
	for(p=0;p<n;p++)
	{
		scanf("%s\n%d %d",name,&money,&children);
		if(children)
		{
			for(i=0;;i++)//������Ǯ �� 
				if(!strcmp(people[i].name,name))
					break;
			people[i].value-=(money/children)*children;
			for(q=0;q<children;q++)//���յ�Ǯ��
			{
				scanf("%s",name);
				for(i=0;;i++)
					if(!strcmp(people[i].name,name))
						break;
				people[i].value+=money/children;	
			} 	
		}
	}
	for(i=0;i<n;i++)
		printf("%s %d\n",people[i].name,people[i].value); 
	return 0; 
} 
