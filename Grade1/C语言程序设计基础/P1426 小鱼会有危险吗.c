#include <math.h>
#include <stdio.h> 
int main()
{
    double s,x,distance=0;                //С���A����ʼ��ǰ�Σ����ι��ľ���Ϊdistance(��)
    unsigned time=0,safe=2;                //���ι���ʱ��Ϊtime(��)
    scanf("%lf %lf",&s,&x);                //��A��ǰ��s(��)�ĵط���һ��̽��������̽�⵽ǰ��x(��)�ķ�Χ
    while(distance<=s+x && safe)
    {
        safe-=distance>=s-x;            //���С����������������������̽�ⷶΧ֮�ھͻ���Σ��
        distance+=7*pow(0.98,time++);    //С���һ������7�ף��˺�ÿһ���εľ�����ǰһ���98%
    }
    return !puts(safe?"n":"y");            //���С����Σ�գ��������y�������������n��
}
