#include<stdio.h>  
int n,i,count;int num[1010]={0};//����ȫ�ֱ�����ֵ�Զ���Ϊ0��num������������Ͱ��  
int main()
{   
    scanf("%d",&n);//����������ĸ���  
    while(n--)
	{
        scanf("%d",&i);//���������i  
        if(num[i]==1)//�������  
            continue;//��������whileѭ��  
        num[i]=1;
		count++;//���ظ����޸�num[i]״̬Ϊ���У������벻�ظ������������  
}  
//������ظ������������  
   printf("%d\n",count);  
//��������������  
   for(i=1;i<1000;i++)//ѭ������Ԫ��  
        if(num[i]) 
		   	printf("%d ",i);//���i���ڣ������i  
   return 0;  
}
