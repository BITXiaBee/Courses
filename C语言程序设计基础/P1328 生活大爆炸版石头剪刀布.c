#include<stdio.h>
int fa,fb;
int p[55];
int main()
{
    int N,Na,Nb,na[1000],nb[1000],i,j;
    scanf("%d%d%d",&N,&Na,&Nb);

    p[0]=p[11]=p[22]=p[33]=p[44]=2;
    p[20]=p[30]=p[31]=p[42]=p[43]=1;
    for(i=1;i<5;++i)
        for(j=0;j<i;++j)
            p[j*10+i]=!p[i*10+j];//���ۣ�Ӯ���䣬���Ӯ

    for(i=0;i<Na;i++)
        scanf("%d",&na[i]);//�׳�������

    for(i=0;i<Nb;i++)
        scanf("%d",&nb[i]);//�ҳ�������

    for(i=0;i<N;i++)
    {
        int a=i%Na,b=i%Nb;//���׵����ڵ�a�������������ڵĵ�b������
        int k=p[na[a]*10+nb[b]];//�ж�
        if(k==0)
            fa++;//���Ӯ+1
        if(k==1)
            fb++;//��Ӯ+1
    }
    printf("%d %d",fa,fb);
    return 0;
} 
