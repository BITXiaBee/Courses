#include <stdio.h>
#define MAX 20010

int e[11], w[MAX], d[MAX], t[MAX];
//e,w,d��Ϊ�����е�E,W,D, t��һ����ʱ���飬������֤��һ������ʱ���ı�w����

int main(int argc, char const *argv[])
{
    int n, i,j,k;
    scanf("%d%d", &n, &k);
    for(i = 1; i <= 10; i++)
        scanf("%d", &e[i]);
    for(i = 0; i < n; i++){
        scanf("%d", &w[i]);
        t[i] = w[i];//t��������ʵ����w������
    }
    for(i = 0; i < n; i++){
        int max = i;
        for(j = 0; j < n; j++)
            if(t[j] > t[max])
                max = j;//ѡ�������˼�룬����Ϊ�˱�֤w�����ݲ��䣬������t����
        d[max] = i;//max������¼��������±�
        t[max] = 0;//����д˳�򽻻��������Ҿ�ֱ�������ˣ�����Ҳ��������
    }
    for(i = 0; i < n; i++)
        w[i] += e[d[i]%10 + 1];
    for(i = 0; i < k; i++){
        int max = 0;
        for(j = 0; j < n; j++)
            if(w[j] > w[max])
                max = j;//����һ����ѡ������˼��
        w[max] = 0;
        printf("%d ", max+1);
    }
    return 0;
}
