#include<stdio.h>
#include<math.h>
int main()
{
	int divisor(int a,int b);
	int a,b,c,d;
	scanf("%d,%d",&a,&b);
	c=divisor(a,b);
	d=a*b/c;
	printf("���Լ����%d\n��С��������%d\n",c,d);
 } 
int divisor(int a,int b)//����������� 
{
	while(a!=b)
	{
		if(a>b)
			a=a-b;
		else
			b=b-a;
	}
	return(a);
 } 
