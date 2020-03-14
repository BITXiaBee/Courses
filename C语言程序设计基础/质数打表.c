#include<stdio.h>
#include<string.h>
#define MAX 1000
int isprime(int n)
{
	 int i;
    for(i=2;i<=(int)sqrt(n);i++)//��2������ƽ����������
        if(n%i == 0) 
			return 0;//����Լ����������������0.
    return 1;//������������1.
} 
int main()
{
	int n,i,num=0;
	FILE *fp=fopen("prime.txt","w");
	for(n=2;n<MAX;n++)
	{
		if(isprime(n))
		{
			fprintf(fp,"%d,",n);
			num++;
			if(num%20==0)
				fprintf(fp,"\n");
		}		
	}
	printf("There are %d prime numbers.",num);
	return 0;
}
