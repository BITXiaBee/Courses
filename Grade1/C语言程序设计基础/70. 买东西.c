/*�� 3 ����Ʒ�� N ���̵���ۣ�ͬ����Ʒ�ڲ�ͬ�̵���ۼ۸�����ͬ��
�ٶ��̵�����������1��2��3��4��......����ʾ����Ʒ��������A��B��C����ʾ��
����������ȹ�����ƷA���ٹ�����ƷB���������ƷC��˳������Ʒ��
����һ���̵�ֻ�ܹ���һ����Ʒ���������һ�����﷽���������ٵ�Ǯ���� 3 ����Ʒ��

��д���﷽���ĺ�����int findm(int n, double gp[ ][3], BUY schm[ ] );
���У�n ���̵�������gp[][] �Ǳ�����Ʒ�۸�����������
schm[ ] �Ǳ�����ù��﷽�����������������ķ���ֵ�ǹ��� 3 ����Ʒ����Ǯ����

���磺�� 3 ����Ʒ���� 5 ���̵���ۣ���Ʒ�ڸ��̵���ۼ����±���ʾ��

 A B B 
1 12 29 9 
2 10 30 8 
3 11 35 12 
4 10 28 11 
5 12 31 8 

�������к�����ǣ�

Total Money are: 46
Goods-Name Shop-Name Goods-Price
A: 2 10
B: 4 28
C: 5 8

���е�һ���ǹ������Ǯ�����ڶ����ǹ��﷽���ı�ͷ��
�ӵ�������ÿ��Ϊһ����Ʒ�����̵�����������Ʒ�ڸõ�ļ۸�
��Ʒ���ô�дӢ����ĸ��ʾ,�� A ��ʼ���̵��������ֱ�ʾ���� 1 ��ʼ��
���﷽�������˳����Ʒ��Ӣ����ĸ�������С�

ע�⣺ֻ�ύ�Ա�ĺ��� findm����Ҫ�ύ��������
�����ĳ����Ѿ����ƺ�������ĸ�ʽ����ֻҪ��ķ�����Ҫ��������鼴��
*/

#include <stdio.h>

typedef struct buy
{  char  gname;
   int   sname;
   int   gprice;
} BUY;

int main( )
{  int i, j, n;
   int min, price[10][3];
   int findm( int n, int price[][3], BUY scheme[] );

   static BUY scheme[3]={ {'A', 0, 0}, {'B', 0, 0}, {'C', 0, 0} };

   scanf( "%d", &n );
   for( i = 0; i < n; i++ )
	for( j = 0; j < 3; j++ )
	   scanf( "%d", &price[i][j] );

   min = findm( n, price, scheme );

   printf("Total Money are : %d\nGoods-Name  Shop-Name  Goods-Price\n", min );
   for ( i=0; i < 3; i++ )
       printf("         %c:%10d%13d\n", scheme[i].gname, scheme[i].sname, scheme[i].gprice );
   return 0;
}
 int findm( int n, int gp[ ][3],BUY schm[ ] ){
 	int i,j,k,p,s=0;
	for(i=0;i<3;i++){
		for(j=1,k=0;j<n;j++){
			if(gp[j][i]<gp[k][i]) k=j;
		}
		s+=gp[k][i];
		schm[i].gprice=gp[k][i];
		for(j=0,p=0;j<n;j++){
			if(gp[j][i]==gp[k][i]) {
				if((i==1&&(j+1)!=schm[0].sname)||(i==2&&(j+1)!=schm[0].sname&&(j+1)!=schm[1].sname)||i==0){
					schm[i].sname=j+1;
					break;
				}
			}
		}
	}
	return s;
 }
