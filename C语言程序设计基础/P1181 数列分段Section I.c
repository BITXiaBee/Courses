#include<stdio.h>
int main()
{
	int n,m,i,a[100005],k=0,l=0;
	scanf("%d%d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(l+a[i]<=m)	//�ж��Ƿ񳬹��涨����
			l+=a[i];
		else	//������,������һ,����l
		{
			l=a[i];
			k++;
		}
	}
	if(l>0)
		k++;	//����ĩβ��
	printf("%d",k);
	return 0;
}
