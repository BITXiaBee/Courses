#include <stdio.h>
int main()
{
 char s[100];
 char ch; 
 int t,i,tem=0,k=1;
  printf("�����������������ascii�벢�Կո����\n"); 
    gets(s);
    printf("%s\n",s);
  for(i=0,t=0;s[i]!='\0';i++)
         t++;
      tem=0;
    for(i=0;i<t;i++)
           {
            
              if(s[i]!=' ')
                 {
                  tem=tem*10+s[i]-'0' ; 
                 } 
              else
               
                {
                
                 ch=(char)tem;
                 printf("%c",ch);
                 tem=0;
                 } 
           }
     printf("\n");  
}
