# include <stdio.h>
# define min(b,d) b<d?b:d
# define max(f,g) f>g?f:g
# define Reduce (volume[z]-volume[z+4])/(price[z+4]-price[z])
# define profit(p) (price[p]+subsidy-price[0])*volume[p]            //��Ʒ����=(�ۼ�+����(-˰��)-�ɱ�)*������
# define maximum for(z=0;profit(z+1)>=profit(z);++z)                //��Ʒ����ĳ��λ����ʱ���Ի���������
int main()
{
    int expect,price[23],volume[23]={0},z=0,reduce,subsidy=0;        //����ͨ����ĳ��Ʒ���貹������ȡ˰��ķ�ʽ
    scanf("%i",&expect);                                            //ʹ��������Ԥ�ڼ�expect(Ԫ)�ϻ���������
    do                                                                //����Ʒ�ĳɱ�Ϊprice[0](Ԫ)
        scanf("%i %i",price+z,volume+z);                            //��price(Ԫ)�ĵ��۳���ʱ��������Ϊvolume
    while(price[z++]>=0);                                            //���븺��ʱ�������еļ�λ���������������
    scanf("%i",&reduce);                                            //�ۼ۱���߼�λÿ��1Ԫ������������reduce
    if(expect>=price[z-2])                                            //���Ԥ�ڼ۲�С����߼�λ
        for(z-=2;volume[z++]>=0;volume[z]=volume[z-1]-reduce)        //�ͼ��������Ӧ�ĵ��ۺ�������ֱ������Ϊ��
            price[z]=price[z-1]+1;                                    //��ÿ��price����1��volume������reduce
    else                                                            //���Ԥ�ڼ۱���߼�λҪС
    {                                                                //������֪�ۼ����ҵ�Ԥ�ڼۻ������ڵ�����
        for(z--;price[--z]>expect;volume[z+3]=volume[z])            //������Ԥ�ڼ۵������ۼۼ�����Ӧ����������
            price[z+3]=price[z];                                    //�ճ���λ�����ڲ���Ԥ�ڼ۸����ļ�λ������
        if(price[z-1]!=expect-1 || price[z+1]!=expect+1)            //��Ԥ�ڼ۸����ļ�λδ֪ʱ
        {
            price[z+1]=expect-1;                                    //�����Ԥ�ڼ۵�1Ԫ�ļ�λ
            price[z+2]=expect;                                        //������Ԥ�ڼ���ȵļ�λ
            price[z+3]=expect+1;                                    //�����Ԥ�ڼ۸�1Ԫ�ļ�λ
            volume[z+1]=volume[z]-Reduce*(price[z+1]-price[z]);        //����֪�����ڼ�λ���������ı仯�����Ե�
            volume[z+2]=volume[z]-Reduce*(price[z+2]-price[z]);        //���ڼ�λ���ۼ�ÿ��1Ԫ������������Reduce
            volume[z+3]=volume[z]-Reduce*(price[z+3]-price[z]);        //��ÿ��price����1��volume������Reduce
        }
        while(price[++z]-expect<2)                                    //���������������֪�����ݷ���ì��ʱ
        {                                                            //������֪������Ϊ׼���Բ�������ݽ�������
            price[z]=max(price[z-1],price[z]);                        //ʹ����price�е��ۼ۰��ɵ͵��ߵ�˳������
            volume[z]=min(volume[z-1],volume[z]);                    //ʹ����volume�е��������ɶൽ�ٵ�˳������
        }                                                            //�Ӷ�ȷ�������ļ��㲻����ִ���
    }
    maximum;                                                        //����Ʒ����������ʱ���ۼ�Ϊprice[z](Ԫ)
    if(price[z]>expect)                                                //�����ۼ�price[z]��������Ԥ�ڼ�expect
        while(price[z]>expect)                                        //�������б�Ҫ�Ը���Ʒ���貹��subsidy(Ԫ)
        {                                                            //�Ӷ�ʹprice[z]���ٴ���expect
            subsidy++;                                                //subsidyΪ�������������Ը���Ʒ���貹��
            maximum;                                                //������貹�������Ʒ����������ʱ���ۼ�
        }                                                            //����Ĳ�������Ϊ����������Ҫ��������
    else                                                            //�����ۼ�price[z]С������Ԥ�ڼ�expect
        while(price[z]<expect)                                        //�������б�Ҫ�Ը���Ʒ��ȡ˰��subsidy(Ԫ)
        {                                                            //�Ӷ�ʹprice[z]����С��expect
            subsidy--;                                                //subsidyΪ�������������Ը���Ʒ��ȡ˰��
            maximum;                                                //������ȡ˰������Ʒ����������ʱ���ۼ�
        }                                                            //��ȡ��˰�����Ϊ����������Ҫ��������
    if(price[z]==expect)                                            //�������ܹ�ʹ����Ʒ��Ԥ�ڼ��ϻ���������
        return !printf("%d\n",subsidy);                                //�����subsidy��ֵ(��֤�����ֵ������С)
    return !puts("NO SOLUTION");                                    //���������NO SOLUTION��
}
