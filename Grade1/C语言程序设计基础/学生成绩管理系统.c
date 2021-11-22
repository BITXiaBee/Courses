/*ѧ���ɼ�����ϵͳ */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 1000    /*Total number of students*/
#define NUM 5		/*Number of subjects*/

void ui_student();
void ui_teacher();
void ui_counsellor();
void query_stu();

void grade_stu();		/*query grades for students*/
void ranking_stu();		/*query rankings for students*/
void Input_tea();		/*input the grades for teachers*/
void grade_tea();		/*query all grades for teachers*/
void ranking_tea();		/*query all rankings for teachers*/
void rank(int i);		/*to rank the subject*/

void Input_coun();		/*to input the information of students*/
void Dis_infor();		/*to display all the information of students*/

struct student
{
	char id[20];
	char name[20];
	int score[NUM]; 
	int ave;
} stu[MAX];
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
		ch=getchar();	/*getchar twice to refresh buffer*/
		switch(ch)
		{
			case '1':grade_stu();break;
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
		ch=getchar();	/*getchar twice to refresh buffer*/
		switch(ch)
		{
			case '1':Input_tea();break;
			case '2':grade_tea();break;
			case '3':ranking_tea();break;
			default :break;
		}
	}
	while(ch!='0');
}

void ui_counsellor()
{
	printf("\n\n\t*��ӭʹ��ѧ���ɼ�����ϵͳ����Ա��*\n\n");
	printf("�����빦����ţ�\n");
	printf("1.¼��ѧ����Ϣ\n");
	printf("2.��ʾѧ����Ϣ\n");
	printf("3.��ѯѧ���ɼ�\n");
	printf("4.��ʾȫ������\n");
	printf("0.�˳�ϵͳ\n");
	while(1)
	{
		int k;
		scanf("%d",&k); 
		if(k==0)
			break;
		switch(k)
		{
			case 1:Input_coun();break;
			case 2:Dis_infor();break; 
			case 3:grade_stu();break;
			case 4:
			{
				int j;
				for(j=0;j<NUM;j++)
					ranking_tea(j);
				break;
			}
		} 
	}
}

void grade_stu()/*query grades for students*/
{
	int j,k;
	char temp[20];
	printf("������ѧ�ţ�\n");
	scanf("%s",&temp);
	printf("���ĳɼ�Ϊ��\n\n");
	printf("��Ŀ���\t�ɼ�\n");
	for(j=0;j<MAX;j++) 
		if(strcmp(temp,stu[j].id)==0)					//to find the student;
			for(k=0;k<NUM;k++)							//print his/her all grades;
				printf("%d\t%d\n",k+1,stu[j].score[k]);	//k+1:The serial number defaults to start from 1.	
}

void ranking_stu()/*query rankings for students*/
{
	int j,k,ranking;
	for(k=0;k<NUM;k++)
		rank(k);		//to rank all;
	char temp[20];
	printf("������ѧ�ţ�\n");
	scanf("%s",&temp);
	printf("��������Ϊ��\n\n");
	printf("��Ŀ���\t�ɼ�\n");
	for(k=0;k<NUM;k++)
	{
		for(j=0;j<MAX;j++) 
			if(strcmp(temp,stu[j].id)==0)					//to find the student;
				ranking=j;
		printf("%d\t%d\n",k+1,ranking);						//print the rankings;
	}
}

void Input_tea(int i)/*input the grades for teachers*/
{
	int stu_id;
	printf("������ѧ��ѧ�źͳɼ���\n(��0��������)\n\n");
	while(1)
	{
		scanf("%d",&stu_id);
		if(!stu_id)
			break;
		scanf("%d",&stu[stu_id].score[i]);
	}	
}

void grade_tea(int i)/*query all grades for teachers*/
{
	//if(counter(i)==0)	//check whether empty
		//printf("\n��������ѧ���ɼ���\n\n");
	int t;
	for(t=0;t<1000;t++)
		if(stu[t].score[i])
			printf("%s\t%s\t%d\n",stu[t].id,stu[t].name,stu[t].score[i]);		
}

void ranking_tea(int i)/*query all rankings for teachers and print*/
{
	int t;
	rank(i);
	for(t=0;t<MAX;t++)
		printf("%d\t%s\t%s%d\n",t+1,stu[t].id,stu[t].name,stu[t].score[i]);
}


void rank(int i)	/*to rank the certain subject*/
{
	struct student temp;
	int j,k;
	for(j=0;j<MAX;j++)
		for(k=0;k<j;k++)
			if(stu[j].score[i]>stu[k].score[i])
			{
				temp=stu[j];
				stu[j]=stu[k];
				stu[k]=temp;
			}
}

void Input_coun()	/*to input the information of students*/
{
	int j;
	printf("������ѧ��  ѧ�� ������\n���롰0000���˳�\n\n");
	for(j=0;;j++)
	{
		scanf("%s,%s",&stu[j].id,&stu[j].name);
		if(strcmp(stu[j].id,"0000")==0)
			break;
	}
}

void Dis_infor()	/*to display all the information of students*/
{
	int j;
	printf("ѧ��\t����\n");
	for(j=0;j<MAX;j++)
		if(strcmp(stu[j].id,NULL)!=0)
			printf("%s\t%s\n",stu[j].id,stu[j].name);
}
