#include <stdio.h>
main ( )
{ 
	int i,h,k,j;
  	scanf ("%d", &h);
  	for ( i=1; i<=2*h-1; i++)   /* ���ƴ�ӡ h �� */ 
  		printf("*");
  		printf("\n");
  	for(j=2;j<=h;j++) 
	   {
		for(k=1;k<=2*h-j;k++)
	   	if(k==j||k==2*h-j)
	   		printf ("*");
	   	else
	   		printf(" ") ;
	   	printf("\n") ;
	   } 
return 0; 
}
