#include <stdio.h>
#include <stdlib.h>

/*������
��������������ѧ�˵ݹ��ˣ����ڴ��һ���е��ǳ�����˼�ɣ�
�Ǹ����͵ġ���ŵ�������⣬һ���ǳ��̵ĳ����Ȼ���������˸��ӵĹ������������氡��
���ɣ�������Ҳ���ֱ�дһ���ݹ���򣬵�Ȼ������Ҫ��д�Ĳ�����̫���ӡ�

���ܣ�
    ������ n �� m ������ۼӺͣ�����n<=m��

���룺
    �������ʼ��n   �������ֹ��m

�����
    �ۼӺ�

Ҫ��
    ʹ�õݹ��㷨��ɡ���˼򵥵���Ŀ��ȻҪ�������Ĳ�������������3��������˭�ܲ³�����*/

int main(int argc, char *argv[]) {
	int n,m,sum;
	int addsum(int n,int m);
	scanf("%d %d",&n,&m);
	sum=addsum(n,m);
	printf("The sum from %d to %d is %d.\n",n,m,sum);
	return 0;
}
int addsum(int n,int m){
	int sum=0;
	if(n<=m) sum=addsum(n+1,m)+n;
	else sum=0;
	return sum;
}
