#include <stdio.h>
#include <stdlib.h>

/*���һά�����е�Ԫ�أ�������20��Ԫ�أ�������˵ĳ˻���*/
/*����Ԫ����˵�˳���ǵ�һ��Ԫ�������һ��Ԫ����ˣ��ڶ���Ԫ���뵹���ڶ���Ԫ����ˣ�.......*/
/*���룺��һ��ΪԪ���������ڶ���Ϊ����Ԫ��
        7
        1 2 3 4 5 6 7
  �����
        7 12 15 4                      */

int main(int argc, char *argv[]) {
	int str[20],n,a,i,j,flog=0;
	scanf("%d",&n);
	flog=n%2;
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);
	}
	for(j=0;j<(n-flog)/2;j++){
	    a=str[j]*str[n-j-1];
	    printf("%d ",a);
    }
    if(flog==1) printf("%d ",str[(n+flog)/2-1]);
    printf("\n");
	return 0;
}
