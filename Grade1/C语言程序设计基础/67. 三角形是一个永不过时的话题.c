#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*��Ŀ����
��ӭ�μӳ�����ƾ���~
������ƾ��������źܶ�����˼�����⣬���У����������йص�����;������֡�
������Ҫ����ģ�����������򵥵�һ�����⣺
����ƽ��ֱ������ϵ�ϵ�N���㣬��֤��N�������������㶼�����ߡ�
�����������ܹ����ɵ��������У�������������ε������

����
����ĵ�һ����һ������T��1 <= T <= 10������ʾһ����T��������
ÿ�������ĵ�һ��Ϊһ������N��3 <= n <= 100������ʾƽ���ϵ�ĸ�����
��������N�У�ÿ�а��������ÿո����������Xi��Yi��-1000 <= Xi, Yi <= 1000����
��ʾ��i��������꣨Xi, Yi����

��� 
ÿ���������һ��������ʾ���������ε�������������һλС����

��������
2
4
-1 1
1 1
1 -1
-1 -1
3
-1 -1
3 0
0 0
�������
2.0
1.5*/

int main(int argc, char *argv[]) {
	static struct dot{
	    signed int x,y;
	}dot[100];
	static struct plane{
		int num;
		float s;
		struct dot dot[100];
	}plane[10];
	int T,d2,d3;
	float st;
	register int i,j;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d",&plane[i].num);
		for(j=0;j<plane[i].num;j++){
			scanf("%d %d",&plane[i].dot[j].x,&plane[i].dot[j].y);
		}
	}
	for(i=0;i<T;i++){
		for(j=0;j<plane[i].num-2;j++){
			for(d2=0;d2<plane[i].num-1;d2++){
				for(d3=0;d3<plane[i].num;d3++){
					st=fabs(plane[i].dot[j].x*plane[i].dot[d2].y+plane[i].dot[d2].x*plane[i].dot[d3].y+plane[i].dot[d3].x*plane[i].dot[j].y-plane[i].dot[j].x*plane[i].dot[d3].y-plane[i].dot[d2].x*plane[i].dot[j].y-plane[i].dot[d3].x*plane[i].dot[d2].y)/2;
					if(st>plane[i].s) plane[i].s=st;
				}
			}
		}
	}
	for(i=0;i<T;i++){
		printf("%.1f\n",plane[i].s);
	}
	return 0;
}
