#include<stdio.h>
#include<string.h>
struct time
{
	int start;
	int end;
}a[5000];
int main()
{
	int n,i,j;
	int maxon=0,maxoff=0;//��ţ��ʱ���ڲ���ţ��ʱ�䣻 
	int now,then;
	struct time temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d %d",&a[i].start,&a[i].end);//���룻
	for(i=0;i<n;i++)
		for(j=0;j<i;j++)
			if(a[i].start<a[j].start)//��ʼʱ���С�������� 
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;		
			} 
	for(i=0;i<n;i++)
	{
		now=a[i].start;
		then=a[i].end;
		
	}
	
 } 
