#include<stdio.h>
#include<math.h>
int main()
{
	 
	while(1)
    {
	int i; 
	printf("请选择函数(1/2)：");
	scanf("%d",&i);
	 
	if(i==1)
	{
		long int a,sum1 =0; 
		printf("请输入一个二进制数（范围：0~11111111）：");
		scanf("%ld",&a);
		int geiwei = a / 1 % 10;
        int shiwei = a / 10 % 10;
        int baiwei = a / 100 % 10;
        int qianwei = a / 1000 % 10;
        int wanwei = a / 10000 % 10;
        int shiwan = a / 100000 % 10;
        int baiwan = a / 1000000 % 10;
        int qianwan = a / 10000000 % 10;
        if(geiwei>1 ||shiwei >1 || baiwei >1 ||qianwei>1||wanwei>1||shiwan>1||baiwan>1||qianwan>1)
           {
           	  printf("输入错误，请重新输入\n");
           }
		else
{
			if(a>11111111){
			printf("输入错误，请重新输入\n");
		}
		
		else if(a>=10000000 && a/10000000==1)
		{
			sum1 = pow(2,7);
			a =a-10000000;
			if(a>=1000000 && a/1000000==1)
			{
				sum1 =sum1+pow(2,6);
				a =a-1000000;
				if(a>=100000 && a/100000==1)
				{
					sum1 =sum1+ pow(2,5);
					a =a-100000;
					if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
				}
				else if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
			}
			else if(a>=100000 && a/100000==1)
				{
					sum1 =sum1+ pow(2,5);
					a =a-100000;
					if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
				}
				else if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
		}
		else if(a>=1000000 && a/1000000==1)
			{
				sum1 =sum1+pow(2,6);
				a =a-1000000;
				if(a>=100000 && a/100000==1)
				{
					sum1 =sum1+ pow(2,5);
					a =a-100000;
					if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
				}
				else if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
			}
			else if(a>=100000 && a/100000==1)
				{
					sum1 =sum1+ pow(2,5);
					a =a-100000;
					if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
				}
				else if(a>=10000 && a/10000==1)
					{
						sum1 =sum1+ pow(2,4);
						a =a-10000;
						if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
					}
					else if(a>=1000 && a/1000==1)
						{
						     sum1 =sum1+ pow(2,3);
						     a =a-1000;
						     if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}  
						}
						else if(a>=100 && a/100==1)
						     {
     							sum1 =sum1+ pow(2,2);
     							a =a-100;
     							if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
	     							
     							
     						}
     						else if(a>=10 && a/10==1)
     							{
							     	sum1 =sum1+ pow(2,1);
							     	a =a-10;
							     	if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;} 
							     }
							     else if(a>=1 && a/1==1)
							     	{
	     								sum1 =sum1+ pow(2,0);
	     								
	     							}
	     							else {sum1=sum1;}
	printf("转换为十进制：%ld\n",sum1);
	 
	}}
	
	else if(i==2)
	{
		long int b; 
		printf("请输入一个十进制数（范围：0~65535）：");
		scanf("%ld",&b);
		if(b>65535){
			printf("输入错误，请重新输入\n");
	}
	else 
	{
        int c,k,z;
        int sum2[17];
        k=0;
        while(b!=0)
        {
          c=b/2;
		  k++;
          sum2[k]=b-c*2;
          b=b/2;
        }
        printf("转换为二进制："); 
        for (z=k;z>=1;z--)
	    {
			  printf("%d",sum2[z]);
   	    }
         printf("\n"); 
    } 

    
}
	
	}} 
 

