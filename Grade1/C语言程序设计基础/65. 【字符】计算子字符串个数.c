/*�ַ���ƥ�����⣺����һ���ַ������������а������������������ַ����ĸ�����
���������ַ����� EFABCABCABCDABCDD �� , �������ַ����� ABC�� ������� 3 ��
����ԭ�ͣ� int countsub( char *str, char *subs ) ��
����˵���� str ����������ַ������׵�ַ�� subs ������Ҫͳ�Ƶ����ַ������׵�ַ��
����ֵ���������������ַ����ĸ�����*/

#include <stdio.h>

int countsub( char *str, char *ss );
main( )
{
    char s1[1000]={0},s2[100]={0};
    gets(s1);
    gets(s2);
    printf("%d\n",countsub(s1,s2));
}

int countsub( char *str, char *ss ){
	register int i,j;
	int count=0;
	for(i=0;*(str+i)!='\0';i++){
		if(*(str+i)==*ss){
			for(j=0;*(str+i)==*(ss+j);i++){
				if(*(ss+j+1)=='\0'){
					j=0;
					count++;
				}
				else j++;
			}
			break;
		}
	}
	return count;
}

