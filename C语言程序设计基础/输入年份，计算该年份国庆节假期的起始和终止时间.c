/*������ݣ��������ݹ���ڼ��ڵ���ʼ����ֹʱ��*/ 
#include<stdio.h>
int main(int argc,char *argv)
{
	int year,month=10,day=1,t,i;
	scanf("%d",&year); 
	for(i=1;year>1900;year--)  
        if(year%400==0||(year%4==0&&year%100!=0))	
			i+=2;  
		 else  
        	i+=1; 
	i+=day+272;					//1900��1��1�յ�10��1�����ӵ����� ��
	i%=7;						//�������ڣ�
	switch(i)
	{
		case 0:printf("09.30-10.06\n");break;
		case 1:printf("10.01-10.07\n");break;
		case 2:printf("09.30-10.06\n");break;
		case 3:printf("09.29-10.05\n");break;
		case 4:printf("09.28-10.04\n");break;
		case 5:printf("09.27-10.03\n");break;
		case 6:printf("10.01-10.07\n");break;	
	}
	return 0; 	
}
