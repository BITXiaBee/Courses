#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*С��������ѧ��ѧϰ�������ƽ�����ĵ�����ʽ��

���У�p Ϊ x �Ľ���ƽ������e �ǽ���������

���룺x, e
�����p  ����С����� 8 λ��*/

int main(int argc, char *argv[]) {
	double x,e,p,Sqrt(double x,double p,double e); 
	scanf("%lf %lf",&x,&e);
	p=Sqrt(x,x,e);
	printf("%.8lf\n",p);
	return 0;
}
double Sqrt(double x,double p,double e){
	if(abs(p*p-x)<e) p=x;
	else p=Sqrt(x,(p+x/p)/2,e);
	return p;
}
