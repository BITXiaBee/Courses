# include <stdio.h>
# include <string.h>
int main()
{
    char n,o,b[20][9],p,y[9];
    int strbig(char*,char*);
    scanf("%d",&n);                       //����n��������(n��20)
    for(o=0,p=n;o-n;o++)
        scanf("%s",b[o]);               //�������ַ�������b��
    while(--p)                           //����ð������
        for(o=n-1;o>n-p-1;--o)           //������b�е����ӡ��󡱵���С������
            if(strbig(b[o],b[o-1]))       //��ÿ��������b[o-1]�����󡱵���b[o]ʱ
            {
                strcpy(y,b[o-1]);       //����y��Ϊ��ʱ�ַ�������
                strcpy(b[o-1],b[o]);
                strcpy(b[o],y);           //ʹ���߽��н���
            }
    do                                   //�������кõ�˳�������������
        printf("%s",b[p++]);           //��������ǿ���ƴ�ӳɵ������
    while(p-n);
    return !puts("");
}

int strbig(char *str1,char *str2)       //�ж���str1�Ƿ񡰴��ڡ���str2
{
    short k=strlen(str1),l,m=0;           //��str1����str2�ĳ��ȷֱ�Ϊk��l
    if(k==(l=strlen(str2)))               //�������ĳ������
        return strcmp(str1,str2)>0;       //��ֱ���ɺ���strcmp�����жϽ��
    do                                   //�����ʹ��������룬���αȽ϶�Ӧλ
        if(str1[m%k]>str2[m%l])           //ֻҪ����str1��ĳһλ��str2����Ӧλ��
            return 1;               //��˵����str1����str2����
        else
            if(str1[m%k]<str2[m%l])       //ֻҪ����str1��ĳһλ��str2����ӦλС
                return 0;           //��˵����str1����str2��С��
    while(++m%k || m%l);               //ʹ�����ֱ���β��ӣ�ֱ�����ص���ͷΪֹ
    return 0;                       //���������ѭ������˵����������ȡ�
}
