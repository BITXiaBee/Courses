/*ѧ���ɼ�����ϵͳ */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void ui_student();
void ui_teacher();
void ui_counsellor();
void query_stu();
struct student
{
	char id[20];
	char name[20];
	int score[5]; 
	int ave;
} stu[1000];
char ch,id_1[20];//id_1  ѧ���Լ������ѧ�� 
int i;//��ʦ��Ŀ��� 
int main() 
{
	char password[20];
	printf("\t*��ӭʹ��ѧ���ɼ�����ϵͳ*\n\n");
	while(1)
	{
		printf("��������������:");
		gets(password);
		if(strcmp(password,"123456")==0)
		{
			ui_student();
			break;
		}
		else if(strcmp(password,"666666")==0)
		{
			ui_teacher();
			break;
		}
		else if(strcmp(password,"000000")==0)
		{
			ui_counsellor();
			break;
		}
		else
		printf("�����������������\n\n");
	}
}
void ui_student()		/*ѧ�����湦��*/ 
{
	printf("\n\n\t*��ӭʹ��ѧ���ɼ�����ϵͳѧ����*\n\n");
	printf("����������ѧ�ţ�");
	gets(id_1);
	printf("1.��ѯȫ���ɼ�\n");
	printf("2.��ѯ����\n");
	printf("0.�˳�ϵͳ\n");
	do
	{
		printf("������Ҫʹ�õĹ��ܱ�ţ�"); 
		ch=getchar();
		switch(ch)
		{
			case '1': grade_stu();break;
			case '2':ranking_stu();break;
		}
	}
	while(ch!='0');
}
void ui_teacher()
{
	printf("\n\n\t*��ӭʹ��ѧ���ɼ�����ϵͳ��ʦ��*\n\n");
	printf("���������Ŀ�Ŀ��ţ�");
	scanf("%d",&i); 
	printf("1.¼��ѧ���ɼ�\n");
	printf("2.��ѯȫ���ɼ�\n");
	printf("3.��ѯ����\n");
	do
	{
		printf("������Ҫʹ�õĹ��ܱ�ţ�"); 
		ch=getchar();
		switch(ch)
		{
			case '1':;break;
			case '2':;break;
		}
	}
	while(ch!='0');
}
void ui_counsellor()
{
	printf("\n\n\t*��ӭʹ��ѧ���ɼ�����ϵͳ����Ա��*\n\n");
}


