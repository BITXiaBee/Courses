#include<stdio.h>
#define N 30
int main()
{
	int i,j,n,m,a[N],b[N],p,k,sum=0;
	scanf("%d %d",&n,&m);					//������ͷ������ʿ������ 
	if(n>m)									
	{
		printf("bit is doomed!\n");			//��ͷ��������ʿ����ʱ������GG�� 
		return 0;
	}
	for(i=0;i<n;i++)						//��ͷ��С�ڵ�����ʿ����ʱ 
		scanf("%d",&a[i]);					//��a[N]��¼��ͷֱ���� 
	for(i=0;i<m;i++)
		scanf("%d",&b[i]);					//��b[N]��¼��ʿ��ߣ� 
	for(i=0;i<n-1;i++)
	{
		p=i;
		for(j=i+1;j<n;j++)
		{
			if(a[p]>a[j])
				p=j;
		}
		if(p!=i)
			k=a[p],a[p]=a[i],a[i]=k;
	}										//a[N]���� 
	for(i=0;i<m-1;i++)
	{
		p=i;
		for(j=i+1;j<m;j++)
		{
			if(b[p]>b[j])
				p=j;
		}
		if(p!=i)
			k=b[p],b[p]=b[i],b[i]=k;
	}										//b[N]���� 
	for(i=0,j=0;i<m;i++)
	{
		if(j==n)
			break;
		if(a[j]<=b[i])						//�ܹ����µ���ͷ�� 
		{
			j++;
			sum+=b[i];
		}

	}
	if(j!=n)								//��ͷʣ�ࣻ 
		printf("bit is doomed!\n");
	else
		printf("%d\n",sum);
	return 0;
}
