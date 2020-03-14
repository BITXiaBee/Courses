#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#define MAX 10000000

int figure[100];
char symbol[100];
char operation[9] = { '+','-','*','/','(',')','#','%','^' };
int top1 = -1;
int top2 = -1;
int flag_error;
char priority[9][9] ={
//    +   -   *   /   (   )   #   %   ^
    {'>','>','<','<','<','>','>','<','<'},// +
    {'>','>','<','<','<','>','>','<','<'},// -
    {'>','>','>','>','<','>','>','>','<'},// *
    {'>','>','>','>','<','>','>','>','<'},// /
    {'<','<','<','<','<','=',' ','<','<'},// (
    {'>','>','>','>',' ','>','>','>','>'},// )
    {'<','<','<','<','<','<','=','<','<'},// #
    {'>','>','>','>','<','>','>','>','<'},// %
    {'>','>','>','>','<','>','>','>','<'},// ^
};//���ȼ��ı� ��ȵĵ���

int change_number(char *p)
{
	int number = *p - '0'; 
	return number;
}
void push_OPND(int a)
{
	top1++;
	figure[top1] = a;
}

int pop_OPND()
{
	top1--;
	return figure[top1+1];
}
void push_OPTR(char a)//����Ĵ��������ջ
{
	top2++;
	symbol[top2] = a;
}
char pop_OPTR()
{
	top2--;
	return symbol[top2+1];
}
char compare(char a, char b)
{
	int hang=0,lie=0;//hang lieָ�Ǹ����ȼ��ı���һһ��Ӧ�����ȼ�  < >   =
	for (int i = 0; i <= 8; i++)
	{
		if (b == operation[i])
		{
			lie = i;
			break;
		}
	}
	for (int i = 0; i <= 8; i++)
	{
		if (a == operation[i])
		{
			hang = i;
			break;
		}
	}
	return priority[hang][lie];
}
int operate(int b, int a, char op)
{
	if (op == '+')return (a + b);
	else if (op == '-')return (a - b);
	else if (op == '*')return (a*b);
	else if (op == '/')
	{
		if (b != 0)return (int)a / b;
		else 
		{
			printf("Divide 0.\n");
			flag_error = 1;
			return MAX;
		}
	}
	else if (op == '%')return (int)fmod(a, b);
	else if (op == '^')
	{
		if (b >= 0)return pow(a, b);
		else
		{
			printf("error.\n");
			//printf("error_when the math error like the up of pow <0.\n");
			flag_error = 1;
			return MAX;
		}
	}
	else
	{
		printf("error.\n");
		//printf("error of when the undefined symbol like $@! and so on.\n");
		flag_error = 1;
		return MAX;
	}
}
int is_figure(char *p)
{
	if (*p >= '0' && *p <= '9')
		return 1;
	else return 0;
}
int main()
{
	//FILE* vvv = freopen("input.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	int flag = 0;//flag =0��ʾ����  =1��ʾ��   =2��ʾ����
	char a, b;
	char expression[100];
	char *p;
	int flag_bianhao = 0;//bianhao=1��ʾҪ��һ�����ֱ�Ϊ����
	while (n--)
	{
		memset(expression, '\0', 100);
		scanf("%s", expression);
		p = expression;
		strcat(expression, "#");
		flag = 2;
		flag_error = 0;//������¼��ӡ�����  ������ִ���  ��flag_error=1��֮��Ͳ����ٴ�ӡ��
		push_OPTR('#');
		if (*p == '-')
		{
			flag_bianhao = 1;//�����һ����-��
			p++;
		}
		while (symbol[top2] != '#' || *p != '#')
		{
			if (*p >= '0' && *p <= '9')//���a������  �ʹ�������ջ��
			{
				if (flag)//���flag��=0����ǰ�治������ �Ͳ���
				{
					if (flag_bianhao)
					{
						push_OPND(-(change_number(p++)));
						flag_bianhao = 0;
					}
					else push_OPND(change_number(p++));
					flag = 0;
				}
				else if (flag == 0)//��ʾǰ������ַ�������
				{
					if (flag_bianhao)
					{
						push_OPND(-(pop_OPND() * 10 + change_number(p++)));
						flag_bianhao = 0;
					}
					else push_OPND(pop_OPND() * 10 + change_number(p++));
					flag = 0;
				}
			}
			else//�����������  �Ϳ���ʹ#����������ͣ���
			{
				if (flag == 1)//���ǰ���ǣ�  �����ֻ�������ֺͣ���-  ������ȫ��
				{//����  ���ǰ���ǣ�  ���棺���ǣ��Ҳ��������Ҳ��ǣ��Ҳ���-
					if (*p!=')'&& is_figure(p)==0 && *p!='(' && *p!='-')//�Ȳ��ǣ�Ҳ��������  �ʹ���  ��������ǣ� Ҳ����
					{
						//printf("error(when the front is '('but the next is not ')'or figure.\n");//Ȼ�������Ѿ������ټ����� ��ʽ����  ֱ�Ӷ�������һ�����ʽ
						printf("error.\n");
						flag_error = 1;
						top1 = -1;
						top2 = -1;
						break;
					}
					if (*p == '-')
					{
						flag_bianhao = 1;
						p++;
						continue;
					}
				}//���ǰ����(
			    if (*p == '(')flag = 1;//��������ǣ�
				else//������ڲ��ǣ�  ǰ�治������  ����Ϊ�������־�Ҫ��������һ��  �������Ϸ��ķ���  ��Ҫ��ʼ�����ˣ�
				{
					if (*(p - 1) == '+' || *(p - 1) == '-' || *(p - 1) == '/' || *(p - 1) == '*' || *(p - 1) == '%')
					{
						if (*p == '-')
						{
							flag_bianhao = 1;
							p++;
							continue;
						}
					}
					flag = 2;
				}

				if (top2 == -1)
				{
					if (!flag_error)//�����Ϊ�� �Ŵ�ӡ  �������Ϊ0˵��֮ǰ�Ѿ���ӡ����
					{
						//printf("error__emmmm.\n");
						printf("error.\n");
						flag_error = 1;
					}
					top1 = -1;
					top2 = -1;
					break;
				}
				else //Ȼ��Ϳ���չ������
				{
					char ch = pop_OPTR();//��ջ��Ԫ���ڵ�ǰԪ�ؽ������ȼ��Ƚ�
					char youxian;
					youxian = compare(ch, *p);
					if (youxian == '<')//���������ջ��Ԫ�����ȼ�С�ڵ�ǰԪ�� ��ǰԪ����ջ
					{
						push_OPTR(ch);//�ְ���push��ȥ
						push_OPTR(*p);
						p++;
						continue;
					}
					else if (youxian == '=')//������  ��Ҳֻ�У����Ż���= �� ֱ�������ͺ�  �Ǿ��ǲ��ô����� ��Ϊ���Ѿ��ó�����
					{
						p++;
						continue;
					}
					else if (youxian == ' ')//������Ϸ�
					{
						printf("error.\n");
						//printf("error(when'('meet #).\n");
						flag_error = 1;
						top1 = -1;
						top2 = -1;
						break;
					}
					else if (youxian == '>')//���ջ��Ԫ�����ȼ���  �ͽ�������
					{
						int x, y;
						int jieguo;
						x = pop_OPND();//x�����ó�����  ���������
						y = pop_OPND();//y�Ǻ��ó�����  �ǵ����ڶ�������  ������y��ǰ  x�ں�
						jieguo = operate(x, y, ch);
						if (jieguo == MAX)//�������  ���ȥ
						{
							top1 = -1;
							top2 = -1;
							break;
						}
						else push_OPND(jieguo);
						continue;
					}
					p++;
				}
			}
		}
		if (top1 == 0 && top2 == 0)printf("%d\n", figure[top1]);
		else if(!flag_error)printf("error.\n");
		top1 = -1;
		top2 = -1;
	}
	//system("pause");
	return 0;
	
}
