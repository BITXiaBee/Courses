#include<stdio.h>
int n,l,yy,sum,col[100000],left[100000],right[100000],a[100000];
void print()//�����Եó����ܸ��Ӽ���
{
    int i;
	if(sum<3)//��Ϊֻ��Ҫ���ǰ����⣬���ԾͼǸ���
    {
        for(i=1;i<=yy;i++)
        printf("%d ",a[i]);//printf��cout�� printf��cout�� printf��cout�� ��Ҫ������˵����
        printf("\n");
        sum++;//������++����������
    }
    return;
}
int has(int x,int y)
{
    if(col[y]==1||left[x+y]==1||right[x-y+10000]==1)//�ж�һ������ط��ܲ��ܷŻʺ�
    return 0;//���ܾͷ���0
    else
    return 1;//�ܾͷ���1
}
void search(int x)
{
    int i;
	if(x>yy)
    {
        n++;
        print();
        return;
    }
    for(i=1;i<=yy;i++)
    if(has(x,i)==1)
    {
        a[x]=i;
        col[i]=left[x+i]=right[x-i+10000]=1;//���ʺ���������֮�������1
        search(x+1);
        col[i]=left[x+i]=right[x-i+10000]=0;//Ҫ�ǻ����ˣ���˵������ʺ��ж�������԰�����ʺ����������
    }
}
int main()
{
	int i;
    scanf("%d",&yy);
    for(i=0;i<10000;i++)
    a[i]=col[i]=left[i]=right[i]=0;
    search(1);
    printf("%d",n);
    return 0;
}
