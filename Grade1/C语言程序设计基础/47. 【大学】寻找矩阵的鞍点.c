#include <stdio.h>  
#define M 50  
#define N 50  
int main()  
{  
    int m,n,i,j,s,t,flag;  
    int a[M][N]={0},max[M],min[N];  
    scanf("%d%d",&m,&n);/*��������m������n*/   
    for(i=0;i<m;i++)  
    {
        for(j=0;j<n;j++)  
        scanf("%d",&a[i][j]);/*�����i�е�j�е�Ԫ��*/  
    }  
    for(i=0;i<m;i++)  
    {
        s=0;  
        for(j=1;j<n;j++)
        {  
            if(a[i][s] < a[i][j]) 
				s=j;  
        }  
        max[i]=s;/*�ҳ���i�е�������������±����max[i]*/  
    }  
    for(j=0;j<n;j++)  
    {  
        t=0;  
        for(i=1;i<m;i++)  
        {
            if(a[t][j]>a[i][j]) t = i;  
        }  
        min[j]=t;/*�ҳ���j�е�������������±����min[i]*/  
    }  
    for(i=0;i<m;i++)  
    {  
        j=max[i];  
        if(min[j]==i)  
        {  
            flag=1;  
            s=i;  
            t=j;  
            break;  
        }  
        else flag=0;  
    }  
    if(flag==1) 
		printf("Point:a[%d][%d]==%d\n",s,t,a[s][t]);  
    else 
		printf("No Point\n");  
	return 0;  
}

