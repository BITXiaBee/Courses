#include<stdio.h>
#include<string.h>
int main()
{
	printf("���ϸ�����Ϊ������\n\n");
	while(1)
	{
		char a[1000];
		gets(a);
		if(strcmp(a,"exit")==0||strcmp(a,"stop")==0)
			break;
		else
		{
			printf("BOT��\n");
			puts(a);
			printf("\n"); 
		}
	}
}
