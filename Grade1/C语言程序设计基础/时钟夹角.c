#include<stdio.h>
#include <math.h>
int main()
	{
	int m,h;
	float a,a1,a2;
	scanf("%d%d",&h,&m);
	a1=h%12*30+0.5*m;	//ʱ��ÿ��1Сʱ��30�ȣ�1������0.5��
	a2=6*m;	//����ÿ��1������6��
	a=fabs(a1-a2);	//�н�Ϊ����֮��ľ���ֵ 
		if(a>180)
		{
		a=360-a;
		}
		else
		{
		a=a;
		}
			if(m>9)
			{
			printf("At %d:%d the angle is %.1f degrees.\n",h,m,a);
 			} 
			else
			{
			printf("At %d:0%d the angle is %.1f degrees.\n",h,m,a);
			}	
return 0;
}
