#include <stdio.h>
#define min(x,y) (x<y?x:y)
int main()
{
    short M,N,row[999]={0},column[999]={0},K,L,D,i,X[2000],Y[2000],P[2000],Q[2000];        
    scanf("%hd %hd %hd %hd %hd",&M,&N,&K,&L,&D);        
    void passageway(short[],short,short);                //����passageway���ڸ�������ͨ�������ŷ���
    for(i=0;i<D;i++)                                    //ÿ�����ڵİ�˵��������ͬѧ
        scanf("%hi%hi%hi%hi",&X[i],&Y[i],&P[i],&Q[i]);    
    while(i--)                                            //����ÿ�����ڵİ�˵��������ͬѧ
        if(X[i]==P[i])                                    
            column[min(Y[i],Q[i])-1]++;                    
        else                                            //������λ��ͬһ�е�������ʱ
            row[min(X[i],P[i])-1]++;                    
    passageway(row,K,M);                                //�����Ҫ���ٵ�K������ͨ����λ��
    passageway(column,L,N);                                //�����Ҫ���ٵ�L������ͨ����λ��
    return 0;
}
void passageway(short _[],short way,short all)            //wayΪҪ�󿪱ٵ�ͨ������allΪ��λ����/����
{
    short t,passage=0,limit=0;                            //limitΪ����ͨ������İ�˵��ͬѧ�Ķ�������
    while(passage!=way)                                    //������limit�趨������ʱ
        for(t=passage=0,limit++;t<all;t++)                //��������limit�����¼����ʱ���ٵ�ͨ����
            passage+=_[t]>=limit;                        //ʹ��ǡ�õ���Ҫ�󿪱ٵ�ͨ����
    for(t=0;way;t++)                                    //������limit�趨����ʱ
        if(_[t]>=limit)
            printf(--way?"%d ":"%d",t+1);                //������ٵĸ���ͨ����λ��
    puts("");                                            //����
}

