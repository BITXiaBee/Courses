#include<stdio.h>
#include<math.h>
#include<stdlib.h> 
#define MAX 100000000
int isPrime(int n)//�ж�����������
{
    int i;
    for(i=2;i<=(int)sqrt(n);i++)//��2������ƽ����������
        if(n%i == 0) 
			return 0;//����Լ����������������0.
    return 1;//������������1.
}
int main()
{
    int i;
    FILE *fp=fopen("Prime_Number.txt","w");//д���ĵ��� 
    for(i=2;i<=MAX;i++)//������
        if(isPrime(i))//��������
        {
        	printf("%d,", i);//���������
        	fprintf(fp,"%d,",i);//д���ĵ��� 
		}
	fclose(fp); 
    return 0;
}
