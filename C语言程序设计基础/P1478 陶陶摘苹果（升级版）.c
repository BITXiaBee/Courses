#include<stdio.h>
#define swap {w=y[v+1];y[v+1]=y[v];y[v]=w;}
int main()
{
    short n,s,a,b,x[5001],y[5001],u,v,w,number=0;
    scanf("%hd %hd",&n,&s);                            //���Ϲ���n��ƻ�������յ�������Ϊs
    scanf("%hd %hd",&a,&b);                            //���Ӹ�a�����յ��ֿ��Թ��������߶�Ϊb
    for(u=0;u<n;u++)
        scanf("%hd %hd",&x[u],&y[u]);                //�������Ϊu��ƻ������߶�Ϊx[u]�����ĵ�����Ϊy[u]
    while(u--)
        if(a+b<x[u])                                //�������޷�ժ�����Ϊu��ƻ��ʱ
            y[u]=s+1;                                //��ƻ�����ĵ�����ҲӦ�������յ�������
    while(++u<n)
        for(v=0;v<n-u-1;v++)
            if(y[v]>y[v+1])
                swap                                //������ƻ���������ĵ�������С�����������
    for(w=0;w<n && s>=0;w++)                        //����ʣ���������ӦС��0
        if((s-=y[w])>=0)
            number++;
    printf("%hd\n",number);                            //�������������ժ����ƻ����number
    return 0;
}
