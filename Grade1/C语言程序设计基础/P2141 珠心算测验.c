#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, j, k, n, b, m;
    int a[100];
    scanf("%d", &n);    //�������ݸ���
    for(i=0; i<n; i++)  //ѭ������������ֵ
    {
        scanf("%d", &a[i]);
    }
    b = 0;
    for(i=0; i<n-1; i++)   //ð������
    {
        for(j=i+1; j<n; j++)
        {
            if(a[i] > a[j])
            {
                b = a[i];
                a[i] = a[j];
                a[j] = b;
            }
        }
    }
    m = 0;
    for(i=2; i<n; i++)  //����a[i]
    {
        for(j=0; j<i-1; j++)    //����ѭ��������j�ӵ�0�����ݿ�ʼ��i-1����a[i]
        {
            for(k=j+1; k<i; k++)    //����ѭ������k=j+1��ʼ������i
            {
                if(a[j]+a[k] == a[i])   //�Ƚ����iǰ��������ͬ����֮�͵���a[i]��m+1
                {
                    m++;
                    goto skip;  //�����һ�����������ľ���goto��������ѭ���������ٱȽ��������
                }
            }
        }
        skip: ;
    }
    printf("%d\n", m);
    return 0;
}
