#include<stdio.h>
#include<stdlib.h>
int main()
{
   char a,b,c,d;

   printf("请输入4个字符(中间用逗号隔开哦)：");
   scanf("%c,%c,%c,%c",&a,&b,&c,&d);
   printf("         %c\n",a);
   printf("        %c %c\n",b,c);
   printf("        %c %c\n",d,d);
   printf("        %c %c\n",d,d);
   printf("        %c %c\n",d,d);
   printf("    %c %c %c %c %c %c\n",d,d,d,d,d,d);
   printf("  %c %c %c %c %c %c %c %c\n",d,d,d,d,d,d,d,d);
   printf("%c %c %c %c %c %c %c %c %c %c\n",d,d,d,d,d,d,d,d,d,d);
   printf("        %c %c\n",d,d);
   printf("        %c %c\n",d,d);
   printf("      %c %c %c %c\n",d,d,d,d);
   printf("    %c %c %c %c %c %c\n",d,d,d,d,d,d,d);
   system("pause"); 
   return 0; 
  

}
