#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ��һ��������ʽ���ַ���������������ͬ������Ϊ�������ַ�����������LeveL����һ�������ַ�����

����:   �ַ���

�����  Yes����No

˵����  �����Yes��˵��������ַ�����һ�������ַ���
          ���No��˵��������ַ�������һ�������ַ���
          ��ʹ�õݹ��㷨ʵ�֡�*/
int main(int argc, char *argv[])
{ static char str1[100],str2[100];
  int n,i,j;
  scanf("%s",str1);
  n=strlen(str1);
  for(i=0,j=n-1;i<n;i++,j--){
      str2[j]=str1[i];
  }
  if(strcmp(str1,str2)==0) printf("Yes\n");
  else printf("No\n");
  return 0;
}
