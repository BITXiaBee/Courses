#include<stdio.h>
#include<string.h> 
void Insert(char *src,int pos,char c);
int main(int argc,char *argv)
{
	int n;
	scanf("%d",&n);//ȷ���������֤�Ÿ��� �� 
	while(n--)
	{
		char arr[19];//Ҫ��֤�����֤���룻 
		int brr[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};//���֤ǰ17λ��ϵ���� 
		char crr[11]={1,0,-1,9,8,7,6,5,4,3,2};  //���֤��18λУ���룻 
		int sum=0,loop=0;
		scanf("%s",arr);
		if(strlen(arr)==18)//�ȶ�18λ���֤�Ų��� 
		{
			for(loop=0;loop<17;loop++)
			{
				sum=sum+(arr[loop]-'0')*brr[loop];//���Զ�Ӧϵ���� 
			}
			if(sum%11==2)
			{
				if(arr[17]=='X')
					printf("Valid\n");
				else
					printf("Invalid\n");
			}
			else
			{
				if((arr[17]-'0')==crr[sum%11])
					printf("Valid\n");
				else
					printf("Invalid\n");
			}
		}
		else if(strlen(arr)==15)//��15λ���֤�Ų���
		{
			if((arr[12]=='9'&&arr[13]=='9')&&(arr[14]=='6'||arr[14]=='7'||arr[14]=='8'||arr[14]=='9'))
			{
				Insert(arr,6,'1');
				Insert(arr,7,'8');
				for(loop=0;loop<17;loop++)
				{
					sum=sum+(arr[loop]-'0')*brr[loop];//���Զ�Ӧϵ���� 
				}
				sum%=11;//������� 
				if(sum==2)
					Insert(arr,18,'X');
				else
					Insert(arr,18,crr[sum]+'0');
				puts(arr);
			}
			else
			{
				Insert(arr,6,'1');
				Insert(arr,7,'9');
				for(loop=0;loop<17;loop++)
				{
					sum=sum+(arr[loop]-'0')*brr[loop];//���Զ�Ӧϵ���� 
				}
				sum%=11;//������� 
				if(sum==2)
					Insert(arr,18,'X');
				else
					Insert(arr,18,crr[sum]+'0');
				puts(arr);
			}
		}
		else
			printf("Invalid\n");
	}
	return 0;
}
void Insert(char *src,int pos,char c)//ԭ���飬����λ�ã������ַ����� 
{
    int i,L;
    L=(int)strlen(src);
    if(L<pos)//����λ��֮ǰ�����鲻�䣻 
    {
        src[L]=c;
        src[L+1]='\0';
    }
    else//����֮�� 
    {
        for (i=L;i>pos;i--)
        {
            src[i]=src[i-1];
        }
        src[pos]=c;
        src[L+1]='\0';
    }
}

