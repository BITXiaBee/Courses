#include<stdio.h>
int main()
{
	int a1,a2,b1,b2,c1,c2,d1,d2,g,k=1,i=0;//c1,c2���ڼ����� d1,d2���ڼ������Լ��k��
	char f;
	scanf("%d/%d %c %d/%d",&a1,&a2,&f,&b1,&b2);
	/*�����жϼӼ��˳�*/
	g=f;
	if(g==45)
	{
		c2=a2*b2;
		c1=a1*b2-a2*b1;
	}
	if(g==43)
	{
		c2=a2*b2;
		c1=a1*b2+a2*b1;
	}
	if(g==42)
	{
		c2=a2*b2;
		c1=a1*b1;
	}
	if(g==47)
	{
		c2=a2*b1;
		c1=a1*b2;
	}
	 
	/*����Ϊ����*/
	if(c1>c2)
	{
		d1=c1;
		d2=c2;
	}
	else if(c1==c2)
	{
		c1=1;
		c2=1;
		i=300;
	}
	else
	{
		d1=c2;
		d2=c1;
	}
	if(c1<0)
	{
		d2=-d2;
	}
	while(i<300)
	{
		k=d1-d2;
		if(k<d2)
		{
			d1=d2;
			d2=k;
		}
		else
		{
			d1=k;
		 } 
		if(d1%k==0&&d2%k==0)
		{
			break;
		}
		i++;//��ը
	}
	c1=c1/k;
	c2=c2/k;
	/*�������*/
	if(c1==0)
	{
		printf("%d/%d %c %d/%d = 0\n",a1,a2,f,b1,b2);
	}
	else if(c2==1)
	{
		printf("%d/%d %c %d/%d = %d\n",a1,a2,f,b1,b2,c1);
	}
	else
	{
		printf("%d/%d %c %d/%d = %d/%d\n",a1,a2,f,b1,b2,c1,c2);
	}
	return 0;
}

