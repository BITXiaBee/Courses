# include <stdio.h>
# define max 1000                                            //�궨���������
int match[10]={6,2,5,5,4,5,6,3,7,6};                        //����match��������0��9��Ӧ�Ļ�����
int total (int n)                                            //����total����ĳ��Ȼ�����ܻ�����
{
    int temp=0;
    do
    {
        temp+=match[n%10];
        n/=10;
    }
    while(n);
    return temp;
}
int main()
{
    int number,A,B,equation=0;                                //��ʽ�����������ֱ�ΪA��B
    scanf("%d",&number);                                    //�������������
    for(A=0;A<max;++A)
        for(B=0;B<max;++B)
            if(total(A)+2+total(B)+2+total(A+B)==number)    //�Ӻź͵Ⱥŷֱ���Ҫ2������
                equation++;                                    //���еĻ����պ�ƴ��һ����ʽ
    printf("%i\n",equation);                                //�����ƴ����ͬ��ʽ������
    return 0;
}
