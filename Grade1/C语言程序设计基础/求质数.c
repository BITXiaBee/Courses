#include <stdio.h>
#include <math.h>
#define N 100000
int isPrime(int n)
{
    int i;
    for(i = 2; i <= (int)sqrt(n); i ++)
        if(n%i == 0) 
			return 0;
    return 1;
}
int main()
{
    int n;
    long long int a[N];
    int cnt=0;
 
    for(n = 2;n<=N; n ++)
        if(isPrime(n)) //�ж�������
            a[cnt++] = n;//�������顣
    for(n = 0; n < cnt; n ++)//����������������顣
        printf("%5d ", a[n]);//�����
    printf("\n");
     
    return 0;
}
