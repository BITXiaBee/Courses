#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*��Ҳμ�����ĩ���ԣ��ɼ���������ʦҪ�� n ��ѧ�����гɼ����ܺ�����
Ҫ����򰴳ɼ������������
����������ж��ڳɼ���ͬ��ѧ����Ҫ�����������ݵ�˳��������С�
���磺��5��ѧ���ĳɼ���
zhang1,90
zhang2,91
zhang3,99
zhang4,91
zhang5,98

��������Ӧ��Ϊ��
zhang3,99
zhang5,98
zhang2,91
zhang4,91
zhang1,90

��ע�������С�zhang2���͡�zhang4��������˳��

���룺
    ��һ��Ϊ��Ҫ�����ѧ������n
    �ӵڶ������������ n �����ݣ�ÿ��Ϊһ��ѧ��������
	�����Ȳ�����20���ַ����������ո񣩣����Գɼ���int��

����������Ľ����ÿ��Ϊһ��ѧ���������ͳɼ���*/

int main(int argc, char *argv[]) {
	static struct student{
		char name[30];
		int len,score;
	}m[100],t1;
	int n;
	register int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0,getchar();;j++){
			scanf("%c",&m[i].name[j]);
			if(m[i].name[j]==44) break;
		}
		m[i].len=strlen(m[i].name);
		scanf("%d",&m[i].score);
	}
	for(i=1;i<n;i++){
		for(j=0;j<n-i;j++){
		    if(m[j].score<m[j+1].score){
		    	t1=m[j];
			    m[j]=m[j+1];
			    m[j+1]=t1;
	    	}
	    }
	}
	for(i=0;i<n;i++){
		for(j=0;m[i].name[j]!='\0';j++){
			printf("%c",m[i].name[j]);
		}
		printf("%d\n",m[i].score);
	}
	return 0;
}
