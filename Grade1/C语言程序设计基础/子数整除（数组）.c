#include <stdio.h>
#include <math.h> 
int main(int argc, char **argv)
{
	int i, j, k;
	int temp, arr[5];		//�������ĸ���λ
	scanf("%d", &k);
	getchar();
	int x, y, z;
	for (i = 10000; i <= 30000; i++)
	{
		for (j = 0; j < 5; j++)      //�����ʼ��
			arr[j] = 0;
		temp = i;
		j = 4;						 // 
		while(temp)                  //�����λ��ʼ����ÿһλ�ֱ��������
		{
			arr[j] = temp / (int)pow(10, j);    			
			temp %= (int)pow(10, j);
			j--;
		}
		x = arr[4] * 100 + arr[3] * 10 + arr[2];   //��ϳ���������
		y = arr[3] * 100 + arr[2] * 10 + arr[1];
		z = arr[2] * 100 + arr[1] * 10 + arr[0];
		if (x % k == 0 && y % k ==0 && z % k == 0)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}

