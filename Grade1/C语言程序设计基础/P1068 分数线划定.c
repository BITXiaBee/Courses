#include<stdio.h>
struct Person
{
	int id;
	int score;
}k[10000],t,temp;
int m,n;
void adjust(int i,int n0)
{
	int j=i*2;
	temp=k[i];
	while(j<=n0)
	{
		if((j<n0&&k[j].score>k[j+1].score)||(j<n0&&k[j].score==k[j+1].score&&k[j].id<k[j+1].id))
			j++;
		if((temp.score<k[j].score)||(temp.score==k[j].score&&temp.id>k[j].id))
			break;
		k[j/2]=k[j];
        j*=2;
    }
    k[j/2]=temp;
}
void heap(void)
{              //�������� 
    int i;
    for(i=n/2;i>0;i--)
	{       //С���ѵĳ�ʼ�� 
        adjust(i,n);
    }
    for(i=n-1;i>0;i--)
	{        //�Ӷ�β������Ѷ�����С���� 
        t=k[i+1];              //ÿ�ε�����ϣ������Ѷ��Ͷ�β��ֵ 
        k[i+1]=k[1];           //�����ͱ�֤�˶�β�ĳɼ��ǵ�ǰ��С�� 
        k[1]=t;
        adjust(1,i);
    }
}
int main(void)
{
    int i,line,num=0;
    scanf("%d %d",&n,&m);
    for(i=1;i<=n;i++)
	{
        scanf("%d %d",&k[i].id,&k[i].score);
    }
    heap();
    m+=m/2;            
    line=k[m].score;        //�����ߵļ��㣬ֱ���ó�������ֱ��ʵ������ȡ�� 
    for(i=1;i<=n;i++)
	{
        if(k[i].score>=line)
		{  //���������Щ�鷳������¼ȡ����Ҫ����������Ծ���������ͳ��һ�� 
            num++;
        }
        else{
            break;
        }
    }
    printf("%d %d\n",line,num);
    for(i=1;k[i].score>=line;i++)
	{            //�����ֹ�����ǳɼ����ڷ����� 
        printf("%d %d\n",k[i].id,k[i].score);//��Ϊ�����Ѿ���֤�˳ɼ��ݼ�����ͬ�ɼ���ŵ����� 
    }
    return 0;
}
