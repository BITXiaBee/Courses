#include <math.h>
#include <stdio.h>
#define score printf("%d:%d\n",win,lost)    //scoreΪ����ȷֵĸ�ʽ
char progress[75000];                        //ƹ����ı�����¼������������progress��
int main()
{
    void results();
    scanf("%[^E]",progress);                //����Eʱ��ʾ������¼���˽���
    results();                                //���ú���results�����11�����µı������
    printf("\n");                            //��һ��
    results();                                //���ú���results�����21�����µı������
    return 0;
}
void results()                                //����results���ڼ��㲢����������
{
    static short point=1;                    //��������Ϊpoint
    auto int b,win,lost;                    //�����ĵ÷�Ϊwin�����ֵĵ÷�Ϊlost
    point+=10;                                //�״ε��øú���ʱΪ11���ƣ��ٴε���ʱΪ21����
    for(win=lost=b=0;progress[b];b++)
    {
        switch(progress[b])
        {
            case 'W' : win++;  break;        //����Wʱ������򻪻��÷�
            case 'L' : lost++;                //����Lʱ���������ֵ÷�
        }
        if(win>=point || lost>=point)        //����������ֵĵ÷ִﵽ��������
            if(abs(win-lost)>=2)            //��˫���ķֲС��2��ʱ
            {
                score;                        //�þֱ��������������һ�ֱ����Ľ��
                win=lost=0;                    //����������һ�֣��ȷ�����
            }
    }
    score;                                    //�����ǰ��һ�ֵıȷ�
    return;
}
