#include <stdio.h>
#include <stdlib.h>
#define N 30
//�����ӷ� 
char *plus(char *s1, char *s2)  
{  
    char *s=(char*) malloc(sizeof(char*)*N);  
    int i=0;  
    int t=0;              //��λ  
    for(;s1[i]!='\0'&&s2[i]!='\0';)  
    {  
        s[i]=(s1[i]-'0'+s2[i]-'0'+t)%10+'0';  
        t=(s1[i]-'0'+s2[i]-'0'+t)/10;  
        i++;  
    }  
    //x1>x2  
    for(;s1[i]!='\0';)  
    {  
        s[i]=(s1[i]-'0'+t)%10+'0';  
        t=(s1[i]-'0'+t)/10;  
        i++;  
    }  
    //x2>x1
    for(;s2[i]!='\0';)  
    {  
        s[i]=(s2[i]-'0'+t)%10+'0';  
        t=(s2[i]-'0'+t)/10;  
        i++;  
    }  
    //������н�λ  
    if(t==1)  
    {  
        s[i++]='1';  
    }  
    s[i]='\0';  
    return s;
}  
  
//���  
void print(char *s)  
{     
    //���ҵ�\0��λ�ã�Ȼ���������  
    int i=0;  
    for(;s[i]!='\0';i++);
    i--;
    for(;i>= 0;i--)
	{  
        printf("%d",s[i]-'0');  
    }
    printf("\n");
}

int main()  
{  
    int a = 1, b = 100;  
  
    scanf("%d %d", &a, &b);  
    getchar();  
      
    int count=b-a;  
    int i;  
    
    char *s1=(char*)malloc(sizeof(char) *N);  
    char *s2=(char*)malloc(sizeof(char) *N);  
    char *s=(char*)malloc(sizeof(char) *N);  
  
    //��ʼ��
    for (i=0;i<N;i++) 
	{  
        s1[i]='\0';  
        s2[i]='\0';  
        s[i]='\0';  
    }
  
    //��x1��x2����ֵ  
    s1[0]='0'; 
    s2[0]='1';
  
    //쳲��������У�����  
    for(i=1;i<=count;i++)  
	{
        s=plus(s1,s2);  
        s1=s2;  
        s2=s;  
    }  
    
    print(s);  
    return 0;   
}  

