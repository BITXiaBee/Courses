#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    j=1;
    while (n-j>0)
        n=n-j++;//�ж����ڵڼ�б��
    if (j%2==0) //�ǵ�mod 2��0����һ��ͬ
        printf("%d/%d",n,j-n+1);//��0�����L�ģ���n��Ϊn/j-n+1
    else 
		printf("%d/%d",j-n+1,n);//��1�����J�ģ���n��Ϊj-n+1/n(��mod2=0���෴)
    return 0;
}
