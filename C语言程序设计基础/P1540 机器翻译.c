#include<stdio.h>
int main()
{int M,N,m[101],i,j,k,n,count=0;
    scanf("%d%d",&M,&N);
    for(i=0;i<M;i++)  
		m[i]=-1;//ע�ⵥ���ǷǸ���������Ϊ��
    for(i=0;i<N;i++)
    {
		scanf("%d",&n);
        for(j=0;j<M;j++)  
			if(n==m[j])  
				goto abc;
        m[count%M]=n;
		count++;//������ʲ����ڴ���
        abc:;
    }
    printf("%d",count);
    return 0;
}
