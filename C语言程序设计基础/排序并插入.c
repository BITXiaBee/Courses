#include <stdio.h>
int main()
{
    int n,a[11],i,j,t,v;
    scanf("%d",&a[0]);			//�����һ����
    for (i=1;i<9;++i)
	{			//ʣ�µİ˸�
        scanf("%d", &a[i]);
    }
    n=9;
    for(i=0;i<n;++i)	//ѡ������
	{						
        t=i;
        for(j=i+1;j<n;++j)
		{
            if(a[t]>a[j])
				t=j;
        }
        if(t!=i)
		{
        	v=a[t],a[t]=a[i],a[i]=v;
        }
    }
    scanf("%d",&v);//Ҫ�������
    for (i=n-1;i>=0;--i)
	{
        if(a[i]>v)
		{
            a[i+1]=a[i];
        }
        else 
			break;
    }
    ++i;//����λ��
    a[i]=v;
    n++;
    for (i=0;i<n;++i)
	{//���
        if(i==0)
		printf("%d",a[i]);
        else printf(",%d",a[i]);
    }
    printf("\n");
    return 0;
}
