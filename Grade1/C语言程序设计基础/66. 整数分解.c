#include <stdio.h>
#include <stdlib.h>

/*���磺1998+1999+2000+2001+2002=10000����һ���ۼӺ͵��� N ����������Ȼ���Ρ�

���ÿ���ۼӺ͵��� N ����������Ȼ���εĵ�һ���������һ������
����֮���÷��š�������ÿ��һ�У������а�ÿ�еĵ�һ������С�����������С�
���û�з�����������Ȼ���Σ������None��

���룺N�����磺N=10000��

�����
18��143
297��329
388��413
1998��2003*/

int main(int argc, char *argv[]) {
	int N,s,flag=0;
	register int i,j;
	scanf("%d",&N);
	for(i=1;i<N;i++){
		for(j=1,s=i;j<N-i;j++){
			s+=i+j;
			if(s==N&&j>1){
				flag=1;
				printf("%d~%d\n",i,i+j);
			}
			if(s>N){
				break;
			}
		}
	}
	if(flag==0) printf("None\n");
	return 0;
}
