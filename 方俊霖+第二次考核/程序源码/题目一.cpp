#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<windows.h>
int main()
{
	int Q;
	
A:	printf("====Prime number and Perfecf number====\n\
1.Determination of Prime Number\n\
2.Sum of Prime Numbers\n\
3.Factor Calculation\n\
4.Determination of Perfect Number\n\
5.Prime Factorization\n\
6.Quit\n\
Choose:");

	scanf("%d",&Q);
	
     
     
     if(Q==1)
   {
   	 long long int m,i,j; 
	 printf("请输入一个整数：");
     scanf("%lld",&m);
     j=0;
     for(i=2;i<m;i++)
     {
     	if(m%i==0)
     	{
	     	j++;
	     }
     }
    if(j==0)
    {
        printf("%d是素数\n", m);
    }
    else
    {
        printf("%d不是素数\n", m);
    }
    Sleep(1000);
    printf("---------------------------------------\n\
正在返回程序");
    Sleep(500); 
    printf(".");
    Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	Sleep(500);
    goto A;
   }
   
else if(Q==2)
	{
    long long int i,j,flag=1;
    long long int n;
    long long int s=0,z=0,sum=0;
    
	printf("请输入一个正整数：");
	scanf("%lld",&n);
	long long int a[n];
	for(i=2; i<n; i++){
		for(j=2; j<i; j++){
			if(i%j==0){
				flag=0;
				break;
			}
		}
		if(flag!=0&&j==i){
			 a[s]=i;
			 s++;
			 z++;
		}
		flag=1;
	}
	for(s=0;s<z;s++)
    {
    	sum =sum+a[s];
    }
	printf("从1到%lld的素数之和为：%lld\n",n,sum);
	Sleep(1000); 
	printf("---------------------------------------\n\
正在返回程序");
    Sleep(500); 
    printf(".");
    Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	Sleep(500);
	goto A;
	
	}
	
else if(Q==3)
	{
   	
   long long int n,m,sum,s,i,j; 
    printf("请输入一个整数：");
     scanf("%lld",&m);
   	long long int a[m];
     j=0;
     for(i=2;i<m;i++)
     {
     	if(m%i==0)
     	{
	     	j++;
	     }
     }
    if(j==0)
    {
        printf("No divisor!It is a prime number.");
    }
    else
    {
        for(i=2,s=0;i<=m;i++)
     {
     	if(m%i==0)
     	{
	     	a[s]=i;
	     	s++;
	     }
     }
     printf("%lld的所有因子为(不包括1)：",m);
     for(n=0;n<(s-1);n++) 
     {
     	printf("%lld,",a[n]);
    	
     }
     printf("%lld",a[s-1]);
    }printf("\n");
    Sleep(1000); 
	printf("---------------------------------------\n\
正在返回程序");
    Sleep(500); 
    printf(".");
    Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	Sleep(500);
    goto A;
   }
   
   
   
else if(Q==4){
	long long int n;
    long long int i=1,sum=0;
    printf("请输入一个整数：");
    scanf("%lld",&n);
    for (i = 1; i < 6; ++i) 
	{
         if(n%i==0) 
	    {
            sum += i;
        }
    }
	if (sum == n)
	{
       printf("%d it is a prime number.\n", n);
    } 
	else
	{
      printf("%d it is not a prime number.\n", n);
    
     }
	 Sleep(1000); 
	printf("---------------------------------------\n\
正在返回程序");
    Sleep(500); 
    printf(".");
    Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	Sleep(500);
	goto A;
 }

else if(Q==5)
{
      long long int j,z,x,i=2;
      printf("请输入一个整数：");
      scanf("%lld", &j);
      z=0;
     for(x=2;x<j;x++)
     {
     	if(j%x==0)
     	{
	     	z++;
	     }
     }
    if(z==0)
    {
        printf("%lld是素数，无法计算质因数。\n", j);
    }
    else
	{
		printf("质因数分别为：");
		while(j>1)
      {
        if(j%i==0)
      {
      	 
         printf("%d ",i);
         j=j/i;
      }
      else i++;
    }
	}  
	Sleep(1000); 
	printf("---------------------------------------\n\
正在返回程序");
    Sleep(500); 
    printf(".");
    Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".");
	Sleep(500);
	printf(".\n");
	Sleep(500);
    goto A;
} 
	


else if(Q==6){
	
    printf("---------------------------------------\n\
正在关闭程序");
    Sleep(1000); 
    printf(".");
    Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
   }
    return 0;
   
	 
}
	