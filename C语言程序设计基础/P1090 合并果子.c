#include<stdio.h>
int a[100000],top;
void change(int b,int c) //����
{
	int t;
	t=a[b];
	a[b]=a[c];
	a[c]=t;
}
void putt(int son)
{
	if(son!=1&&a[son]<a[son/2]) //���¶�������
	{
		change(son,son/2);
		putt(son/2);
	}
}

void gett(int father)
{
	int son,t; //���϶�������
	if(father*2+1<=top)
	{
		if(a[father*2]<a[father*2+1]) 
			son=father*2;
		else 
			son=father*2+1;
		if(a[father]>a[son])
		{
			change(father,son);
			gett(son);
		}
	}
}

int main()
{
	int i,n;
	long long sum=0;
	scanf("%d",&top);
	for(i=1;i<=top;i++)
	{
		scanf("%d",&a[i]);
		putt(i);
	}
	n=top;
	for(i=1;i<=n;i++) //�ϲ�
	{
		if(a[2]<a[3]||a[3]==0)
		{
			a[1]=a[2]+a[1];
			a[2]=a[top];
			gett(2);
		}
		else
		{
			a[1]=a[3]+a[1];
			a[3]=a[top];
			gett(3);
		}
		sum=sum+a[1];
		a[top]=0; //ɾ��Ԫ��
		top--;
		gett(1);
	}
	printf("%d",sum-a[2]); //�����ɾ��֮ǰ��ӵ�a[1],��Ϊa[2]=a[1],���Լ�ȥa[2]
	return 0;
}
