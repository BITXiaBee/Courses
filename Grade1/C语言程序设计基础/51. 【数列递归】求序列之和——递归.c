#include <stdio.h>
#include <stdlib.h>

/*��ʹ�õݹ��㷨���������е�ǰn��֮�͡�
            1 + 1/2 - 1/3 + 1/4 -1/5 ......
���룺n
��������е�ǰn��ͣ���ȷ��С����֮���6λ�� */

int main(int argc, char *argv[]) {
	int n;
	float s;
	float sum(int n);
	scanf("%d",&n);
	s=sum(n); 
	if(n==1)
	    printf("1\n");
	else
	    printf("%f\n",s);
	return 0;
}
float sum(int n){
	float s;
	if(n==1) 
		s=1;
	else if(n%2==0) 
		s=sum(n-1)+1/(float)n;
	else s=sum(n-1)-1/(float)n;
    return s;
}
