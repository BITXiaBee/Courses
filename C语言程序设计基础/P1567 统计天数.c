#include<stdio.h>
#include<stdlib.h>
int dp[100000000];
int weather[100000000];
int comp(const void*a,const void*b)
{
    return *(int*)b-*(int*)a;//����
}
int main()
{
    int n,i;
    scanf("%d",&n);
    dp[0]=1;//�߽�ֵ
    for(i=0;i<n;i++)
    {
        scanf("%d",&weather[i]);
        if(i==0)
        {
            continue;
        }
        if(weather[i]>weather[i-1])//������������ƾͼ�һ
        {
            dp[i]=dp[i-1]+1;
        }
        else//�½��ˣ�����
        {
            dp[i]=1;
        }
    }
    qsort(dp,n,sizeof(int),comp);//�����ҳ�����
    printf("%d",dp[0]);//�Ӵ�С�ţ�����ڵ�һ��
    return 0;
}
