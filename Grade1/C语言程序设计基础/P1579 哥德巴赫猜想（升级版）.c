#include<stdio.h>
int zhi(int x)
{
    int i;
    for(i=2;i*i<=x;i++)
    if(x%i==0)
    return 0;
    return 1;
}
//�ж��������Զ��庯��
int main()
{
    int i,j,n;
    scanf("%d",&n);
    if(zhi(n-4))
    {
    	printf("2 2 %d",n-4);
        return 0;
	}//���������ǰ����������2
    for(i=3;i<=n;i++)
    	for(j=3;j<=n;j++)//ö��
	    {
	      if(zhi(i)&&zhi(j)&&zhi(n-i-j))    //�ж�����
	        {
	            printf("%d %d %d",i,j,n-i-j);
	            return 0;
	        }
	    }
}
