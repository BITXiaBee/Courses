# include <stdio.h>
# define gap ('A'-1)            //��ĸA��Z�ֱ��������1��26
int main()
{
    char comet[7],team[7],*p;
    int num_c=1,num_t=1;
    scanf("%[A-Z]\n%[A-Z]",&comet,&team);
    for(p=comet;*p;p++)
        num_c*=*p-gap;            //������num_cΪ�������и���ĸ�����������֮��
    for(p=team;*p;p++)
        num_t*=*p-gap;            //С����num_tΪС�����и���ĸ�����������֮��
    if(num_c%47==num_t%47)        //������������47��������С��������47���������
        puts("GO");                //�������GO������ʾ��С��ᱻ�����Ǵ���
    else
        puts("STAY");            //���������STAY������ʾ��С�鲻�ᱻ�����Ǵ���
    return 0;
}
