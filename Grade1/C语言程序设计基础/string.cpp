#include<string.h>
#include<stdio.h>
/*int strlen(char str[]); 
	//����str�ĳ���
char[] strcat(char str1[],char str2[]); 
	//��str2�ӵ�str1�󣬷���str1 
char[] strncat(char str1[],char str2[],unsigned int maxsize); 
	//��str2�����maxsize���ַ��ӵ�str2�󣬷���str1 
char[] strcpy(char str1[],char str2[]);
	//��str2���ǵ�str1������str1 
int strcmp(char str1[],char str2[]);
	/*�Ƚ�str1��str2
	  ��str1<str2,���ظ���
	  ��str1=str2,����0
	  ��str1>str2,��������*/ 
int main() {
	char s1[100]="nicetocyou",s2[100]="c100goodluck";
	printf("%d\n",strlen(s1));
	printf("%s\n",strcat(s1,s2));
	printf("%s\n",strncat(s1,s2,4));
	printf("%s\n",strcpy(s1,s2));
	printf("%d %d\n",strcmp(s1,s2),strcmp(s1,s1));
}

