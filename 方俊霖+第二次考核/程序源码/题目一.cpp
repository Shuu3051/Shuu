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
	 printf("������һ��������");
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
        printf("%d������\n", m);
    }
    else
    {
        printf("%d��������\n", m);
    }
    Sleep(1000);
    printf("---------------------------------------\n\
���ڷ��س���");
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
    
	printf("������һ����������");
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
	printf("��1��%lld������֮��Ϊ��%lld\n",n,sum);
	Sleep(1000); 
	printf("---------------------------------------\n\
���ڷ��س���");
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
    printf("������һ��������");
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
     printf("%lld����������Ϊ(������1)��",m);
     for(n=0;n<(s-1);n++) 
     {
     	printf("%lld,",a[n]);
    	
     }
     printf("%lld",a[s-1]);
    }printf("\n");
    Sleep(1000); 
	printf("---------------------------------------\n\
���ڷ��س���");
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
    printf("������һ��������");
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
���ڷ��س���");
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
      printf("������һ��������");
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
        printf("%lld���������޷�������������\n", j);
    }
    else
	{
		printf("�������ֱ�Ϊ��");
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
���ڷ��س���");
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
���ڹرճ���");
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
	