#include<stdio.h>
int t[200001];
void merge_sort(int a[],int l,int r)
{
    int mid;
    if(l==r)return;
    mid=(l+r)/2;
    merge_sort(a,l,mid);
    merge_sort(a,mid+1,r);
    //����
    int p=l,j=mid+1,i=l;
    while(i<=mid&&j<=r)
    {
        if(a[i]<a[j])
        t[p++]=a[i++];
        else
        t[p++]=a[j++];
    }
    while(i<=mid)t[p++]=a[i++];
    while(j<=r)t[p++]=a[j++];
    //�ϲ�
    for(i=l;i<=r;i++)
    a[i]=t[i];
}//��ֵ
int main()
{
    int b[200001]={0},s=0,n,i,a[200001];//�ǵö���һ��
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,1,n);//�Ͽ������
    for(i=1;i<=n;i++)
printf("%d ",a[i]);//���
}
