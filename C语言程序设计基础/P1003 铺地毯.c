# include "stdio.h"
# define M 10000                                    //MΪ��̺������
# define cover_x x>=a[o] && x<=a[o]+g[o]            //cover_xΪx�����ϵĸ�������
# define cover_y y>=b[o] && y<=b[o]+k[o]            //cover_yΪy�����ϵĸ�������
short main()
{
    int n,o,a[M],b[M],g[M],k[M],x,y,top=-2;            //��������޵�̺����ʱ���-1
    scanf("%d",&n);                                    //���Ϊ1��n��n�ž��ε�̺��������
    for(o=0;o<n;o++)
        scanf("%d%d%d%d",&a[o],&b[o],&g[o],&k[o]);    //ÿ�ŵ�̺���½ǵ�����Ϊ(a,b)���䳤�ȺͿ�ȷֱ�Ϊg��k
    scanf("%i%i",&x,&y);                            //����������Ϊ(x,y)
    for(o=0;o<n;o++)
        if(cover_x && cover_y)                        //���ĳ��̺���������
            top=o;                                    //�ͽ��õ�̺�ġ���š�(��ʵ�ʱ����1)����top
    printf("%d\n",top+1);                            //���������������������ŵ�̺�ı��
    return 0;
}
