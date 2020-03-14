#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

int getch(void);//����������ֹ����ַ�
void ungetch(int c);

int buffer[100];
int bufp = 0;

int main(void)
{
    int x = 0;
    int sum = 0;
    int position = 0;
    int d = 0, sign, c;
    char v;

    sign = 1;
    if ((c = getch()) == '+' || c == '-')
        sign = (c == '+') ? 1 : -1;
    else
        ungetch(c);//��һ�����������У���ʵ����ͳһ��
    while (c = getch()) 
	{
        if (isdigit(c)) 
		{
            d = 10 * d + c - '0';
            continue;
        }
        if (islower(c)) 
		{
            if (d == 0)
                d = 1;
            x += sign * d;
            d = 0;
            v = c;
            continue;
        }
        sum += sign * d;
        d = 0;
        if (c == '+' || c == '-')
            sign = (c == '+') ? 1 : -1;
        if (c == '=')
            break;
    }
//��������Ƿ��Ų��'='���
    sign = -1;
    if ((c = getch()) == '+' || c == '-')
        sign = (c == '+') ? -1 : 1;
    else
        ungetch(c);
    while (c = getch()) 
	{
        if (isdigit(c)) 
		{
            d = 10 * d + c - '0';
            continue;
        }
        if (islower(c)) 
		{
            if (d == 0)
                d = 1;
            x += sign * d;
            d = 0;
            v = c;
            continue;
        }
        sum += sign * d;
        d = 0;
        if (c == '+' || c == '-')
            sign = (c == '+') ? -1 : 1;
        if (c == '\n' || c == '\r' || c == '\0')
            break;
    }
    printf("%c=%.3f", v, -1 * (float)sum / (float)x);
    return 0;
}

int getch(void)
{
    return (bufp > 0) ? buffer[--bufp] : getchar();
}

void ungetch(int c)
{
    buffer[bufp++] = c;
}
