#include<stdio.h>
int main()
{
    float a,b=2,k=2;
    int i=1;
    scanf("%f",&a);
    for(i=1;;i++)
    {
		if(k>a) 
			break;/*�ж��Ƿ��ε�Ŀ��*/
    	else 
     	{
          	b=b*0.98;/*ÿ�����εľ���*/
          	k=b+k;/*ÿ��������������ܾ���*/
      	}
	}
    printf("%d",i);/*�������*/
    return 0;
}
