
#include<stdio.h>

int main() {

	int n,i,j;

	while(scanf("%d",&n)) {

 

		//������

		for(i=1; i<=n; i++) {

			for(j=1; j<=n-i; j++) //���ո�

				printf("  ");

			for(j=1; j<=i; j++)

				printf("%-2d",j);//�����1��n

			for(j=i-1; j>=1; j--)

				printf("%-2d",j);//�����n-1��1

			printf("\n");

		}

		//������

		for(i=n-1; i>=1; i--) {

			for(j=1; j<=n-i; j++) //���ո�
 
				printf("  ");

			for(j=1; j<=i; j++)

				printf("%-2d",j);//�����1��n

			for(j=i-1; j>=1; j--)

				printf("%-2d",j);//�����n-1��1

			printf("\n");

		}

	}

	return 0;

}



