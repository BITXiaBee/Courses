#include <stdio.h>

/*һ�����������Բ�ֳ����ɸ��������ĺ͡�����������4��������4�ֲ�ַ�����
    4=3+1��4=2+2��4=2+1+1��4=1+1+1+1
�� n ��ʾ����ֵ����������� m ��ʾ�� n �в��������������������������� n ���ж����ֲ�ַ����������еݹ鹫ʽ��
              0     ( �� n < 1 �� m < 1 ʱ ) 
              1                             ( �� n = 1 �� m = 1 ʱ ) 
  count(n,m)= count(n, n)                   ( �� n < m ʱ ) 
              count(n, m-1) + 1             ( �� n=m ʱ ) 
              count(n-m, m) + count(n, m-1) ( ������� )
��д�ݹ麯��������һ���������ж����ֲ�ַ�����

����˵����n ����ֵ���������m ��ʾ�� n �в���������������
��������ֵ�ǲ�ַ�������
�������룺4�� �����4*/ 

int main() 
{
   int n,count();
   scanf("%d",&n);
   printf("%d\n",count(n,n-1));	
   return 0;
}

int count( int n, int m )  
{  if(n<1||m<1) return 0;
   else if(n==1||m==1) return 1;
        else if(n<m) return count(n,n);
             else if(n==m) return count(n,m-1)+1;
                  else return count(n-m,m)+count(n,m-1);
}

