#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/* ���� 5 �����ʣ������ǰ��Ӵ�С��˳�����к������

���룺5������
�����������˳��*/

int main(int argc, char *argv[]) {
	static char a[5][100],t[100];
	int i,j,p;
	for(i=0;i<=4;i++){
		gets(a[i]);
	}
	for(i=0;i<4;i++){
		p=i;
		for(j=i+1;j<=4;j++){
			if(strcmp(a[p],a[j])<0) p=j;
		}
		if(p!=i){
			strcpy(t,a[p]);
			strcpy(a[p],a[i]);
			strcpy(a[i],t);
		}
	}
	for(i=0;i<=4;i++){
		puts(a[i]);
	}
	return 0;
}
