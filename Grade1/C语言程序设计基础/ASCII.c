#include <stdio.h>
#include <string.h>
 
int main(void)
{
    char buf[2000], tmp[10], str[50];
    char *p1 = buf, *p2;
    int i = 0;
 
    gets(buf);                          // ��ȡ��������
     
    while ((p2 = strchr(p1, ' '))) {    // ѭ�����ҿո�
        memset(tmp, 0, sizeof(tmp));    // tmp��ʱ������0
        strncpy(tmp, p1, p2 - p1);      // ��ȡһ�����ֵ���ʱ����tmp��
        str[i++] = strtol(tmp, NULL, 10);   // �ַ�ת��Ϊ����,���浽str��
        p1 = p2 + 1;                        // ָ��ָ����һ������
    }   
 
    str[i++] = strtol(p1, NULL, 10);        // ���һ�������Ҳ����ո�
    str[i] = 0;                             // ��������0
 
    printf("str = %s\n", str);              // ��ӡ�õ����ַ���
 
    return 0;
}
