# include <stdio.h>
# include <string.h>
struct
{
    char *number;                                        //numberΪ��������Ӧ��Ӣ�ĵ���
    short mod;                                            //modΪ�����ֵ�ƽ����100�����Ľ��
}
chart[19]={"a",1,"one",1,"two",4,"three",9,"four",16,"eleven",21,"eighteen",24,"fifteen",25,"five",25,
            "six",36,"twelve",44,"seven",49,"sixteen",56,"nineteen",61,"eight",64,"thirteen",69,
            "nine",81,"seventeen",89,"fourteen",96};    //�������������ƽ���������Ķ�Ӧ��chart
int main()
{
    char word[6][28],s,m=-1,t=0;                        //���뺬��6��Ӣ�ĵ��ʵľ���
    for(s=0;s-6;scanf("%s ",word[s++]));                //������Ϊ���ʺ󱣴�������word��
    for(;++m<19;)                                        //��˳����������Ӧ��chart�е�Ӣ�ĵ���
        for(s=6;s>=0;s--)                                //�ж����Ƿ��ھ����г���
            if(!strcmp(chart[m].number,word[s]))        //��������г����˸õ���(����)
                t=printf(t?"%02d":"%d",chart[m].mod);    //�������ƽ�������Ľ������֤�������С
    return !puts(t?"":"0");                                //����Ӧ���еĵ��ʾ�δ���֣����޷���ϣ����0
}
