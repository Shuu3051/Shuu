#include<stdio.h>
#include<stdlib.h>
#define FANW(a,b) (rand()%((b-a+1)) + (a))  //����һ����Χ��������rand���ɣ�a-b����������� 
#define SHUU() FANW(1, 100)          // ��������������ķ�Χ����ʹSHUU��Ϊ�÷�Χ 
#include<time.h>                    // ��ʱ����Ϊ��������ӣ��ƺ�ͬһ���������ʽ����ȣ��������������������Ǻ������룬һ�뻻һ���Ѿ������� 
#include<windows.h>

int main()
{
B:	int mod;
    printf("====��������CALϵͳ====\n\
1.��ģʽ\n\
2.���ģʽ\n\
3.����ģʽ\n\
4.�˳�ϵͳ\n\
��ѡ��");
    scanf("%d",&mod); 
    
    if(mod==1)
    {

    int i,j,t,r,a,s=0;
    char z,F,f[]={'+','-','*','/'};
A:    srand(time(NULL) );          //��ȷ��ÿһ��ѭ��ʱ�����1���ӣ�����ʱ����ͬʱ�����ͬ����ֵ 
    F=f[FANW(0,3)];            //������ɷ��ţ���ֵ��F 
    if(F=='+')
    {
   		
       	
	   while(a>100)         //����whileѭ��ʵ�ּ�����С�ڵ���100 
    	{
	    	i=SHUU();         
            j=SHUU(); 
            a=i+j;
	    } 
	        
	      
	       printf("%d+%d=",i,j);
            scanf("%d",&r);
            if(r==a)
	        {
              printf("Right !\n\Continue? y/n\n");
              scanf("%s",&z);
              if(z=='y')
              {
                 a=101;        //��ֵa=101��ʹ��������ʱ��������½���ѭ��������µ������������˺�ʱҲ��ͬ�� 
              	goto A;
              }
              else if(z=='n'){
              	a=101;
              	goto B;
              }
            }
            else
		    {
		         printf("Wrong ! Please try again.\n");
			     printf("%d+%d=",i,j);
                 scanf("%d",&r);
                 if(r==a)
	            {
                   printf("Right !\n\Continue? y/n\n");
                   scanf("%s",&z);
                   if(z=='y')
                   {
                      a=101;
              	      goto A;
                   }
                   else if(z=='n'){
                   	a=101;
              	    goto B;
                       }
                 }
			     else
			     {
     				 printf("Wrong ! Please try again.\n");
			         printf("%d+%d=",i,j);
                     scanf("%d",&r);
                     if(r==a)
                     {
                         printf("Right !\n\Continue? y/n\n");
                         scanf("%s",&z);
                         if(z=='y')
                         {
                           a=101;
              	           goto A;
                         }
                         else if(z=='n'){
                         	a=101;
                           	goto B;
                             }
                     }
                     else
				 	 {
                     	printf("Wrong ! You have tried 3times! Test over!\n");
                     	a=101;
			            goto B;
                     }
     			 }
            
	        } 
	    
    	}
    	
    else if(F=='-')
   	  {
   	i=SHUU(); 
        j=SHUU(); 
  	   	if(i<j)
  	   	{ 
          t=i;                   //����ֵ����ͬ 
          i=j;
          j=t;
          	
        }
        a=i-j; 
        printf("%d-%d=",i,j);
        scanf("%d",&r);
        if(r==a)
        {
        	printf("Right !\n\Continue? y/n\n");
            scanf("%s",&z);
            if(z=='y')
            {
            	a=101;
            	goto A;
            }
            else if(z=='n')
     	    {
     	    	a=101;
              	goto B;
            }
        }     
	    else
        {
            printf("Wrong ! Please try again.\n");
            printf("%d-%d=",i,j);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;
            	    goto A;
                }
                else if(z=='n')
     	        {
     	        	a=101;
              	   goto B;
                }
            }
            else
            {
            	 printf("Wrong ! Please try again.\n");
                 printf("%d-%d=",i,j);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                    scanf("%s",&z);
                    if(z=='y')
                    {
                    	a=101;
            	        goto A;
                    }
                    else if(z=='n')
                    {
                    	a=101;
                    	goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! You have tried 3times! Test over!\n");
                 	a=101;
                 	goto B;
                 }
                 
            }
        }
   	  }
    else if(F=='*')
    {
   		
       	
	    while(a>100)         
    	{
	    	i=SHUU(); 
            j=SHUU(); 
            a=i*j;
	    } 
	   
	      
	       printf("%d*%d=",i,j);
            scanf("%d",&r);
            if(r==a)
	        {
              printf("Right !\n\Continue? y/n\n");
              scanf("%s",&z);
              if(z=='y')
              {
                 a=101;
              	goto A;
              }
              else if(z=='n'){
              	a=101;
              	goto B;
              }
            }
            else
		    {
		         printf("Wrong ! Please try again.\n");
			     printf("%d*%d=",i,j);
                 scanf("%d",&r);
                 if(r==a)
	            {
                   printf("Right !\n\Continue? y/n\n");
                   scanf("%s",&z);
                   if(z=='y')
                   {
                      a=101;
              	      goto A;
                   }
                   else if(z=='n'){
                   	a=101;
              	    goto B;
                       }
                 }
			     else
			     {
     				 printf("Wrong ! Please try again.\n");
			         printf("%d*%d=",i,j);
                     scanf("%d",&r);
                     if(r==a)
                     {
                         printf("Right !\n\Continue? y/n\n");
                         scanf("%s",&z);
                         if(z=='y')
                         {
                           a=101;
              	           goto A;
                         }
                         else if(z=='n'){
                         	a=101;
                           	goto B;
                             }
                     }
                     else
				 	 {
                     	printf("Wrong ! You have tried 3times! Test over!\n");
                     	a=101;
			            goto B;
                     }
     			 }
            
	        } 
	    
    	}
    	else if(F=='/')
   {
 E:     while(i%j!=0)      //�ü�����Ϊ������ʹ������������7/3����ʽ 
   	    {
    	
        i=SHUU(); 
        j=SHUU(); 
  	   	if(i<j)
  	   	{
          t=i;
          i=j;
          j=t; 	
        }
        
        }
        a=i/j; 
        printf("%d/%d=",i,j);
        scanf("%d",&r);
        if(r==a)
        {
        	printf("Right !\n\Continue? y/n\n");
            scanf("%s",&z);
            if(z=='y')
            {
            	i=5;          //����Ҫ��i��j���¸�ֵ��һ��ʼ���ڿ�ͷ��ֵ�ģ����ǳ���ᱨ�� 
            	j=10;
            	a=101;
            	goto A;
            }
            else if(z=='n')
     	    {
     	    	i=5;
            	j=10;
            	a=101;
              	goto B;
            }
        }     
	    else
        {
            printf("Wrong ! Please try again.\n");
            printf("%d/%d=",i,j);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	i=5;
            	    j=10;
            	    a=101;
            	    goto A;
                }
                else if(z=='n')
     	        {
     	        	i=5;
              	    j=10;
              	    a=101;
              	   goto B;
                }
            }
            else
            {
            	 printf("Wrong ! Please try again.\n");
                 printf("%d/%d=",i,j);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                    scanf("%s",&z);
                    if(z=='y')
                    {
                    	i=5;
                    	j=10;
                    	a=101;
            	        goto A;
                    }
                    else if(z=='n')
                    {
                    	i=5;
            	        j=10;
            	        a=101;
                    	goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! You have tried 3times! Test over!\n");
                 	i=5;
            	    j=10;
            	    a=101;
                 	goto B;
                 }
                 
            }
        }
   	  }

   
    }
    
    
    
    else if(mod==2)
    {
G:  int i,j,TURE,FEN=0,t,r,a,x,s=0;
    char z,F,f[]={'+','-','*','/'};
  
   	  
     for(x=0;x<10;x++)
     {
     	srand(time(NULL) ); 
        F=f[FANW(0,3)]; 
        if(F=='+')
        {
        	while(a>100)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            a=i+j;
	        } 
	        
	        printf("%d+%d=",i,j);
            scanf("%d",&r);
            if(r==a)
            {
            	a=101;
            	printf("Right !\n");
            	FEN++;            //�����Ǽӷ�߹ 
            }
            else 
            {
            	a=101;
            	printf("Wrong !\n");
            }
        }
        else if(F=='-')
		{
			i=SHUU(); 
            j=SHUU(); 
  	   	    if(i<j)
  	   	    { 
              t=i;                  
              i=j;
              j=t;
          	}
          	a=i-j; 
            printf("%d-%d=",i,j);
            scanf("%d",&r);
            if(r==a)
            {
            	
            	a=101;
            	printf("Right !\n");
            	FEN++;  
            }
            else
			{
            	
            	a=101;
            	printf("Wrong !\n");
            }
		}
		else if(F=='*')
		{
			while(a>100)         
    	    {
	    	i=SHUU(); 
            j=SHUU(); 
            a=i*j;
	        } 
	        printf("%d*%d=",i,j);
            scanf("%d",&r);
            if(r==a)
            {
            	
            	a=101;
            	printf("Right !\n");
            	FEN++;  
            }
            else
            {
          		
            	a=101;
            	printf("Wrong !\n");
            }
		} 
		else if(F=='/')
		{
			while(i%j!=0)
			{
				i=SHUU(); 
                j=SHUU(); 
  	   	        if(i<j)
  	   	        {
                  t=i;
                  i=j;
                  j=t; 	
                }
			}
			a=i/j; 
            printf("%d/%d=",i,j);
            scanf("%d",&r);
            if(r==a)
            {
            	i=5;
            	j=10;
            	a=101;
            	printf("Right !\n");
            	FEN++;  
            }
            else
            {
          		i=5;
            	j=10;
            	a=101;
            	printf("Wrong !\n");
            }
		}
     }
     
     TURE=FEN*10;
     printf("������ȷ��Ϊ%d%%��",TURE);
     if(FEN>7.5)
	 {
	 	printf("����75%%�����������档\n");
      	goto B;
 	 } 
 	 else
  	 {
  	 	printf("����75%%�����������⡣\n"); 
        goto G;
 	 }
     
    	
    	
    	
    	
    	
    } 
    else if(mod==3)
    {
    	int i,j,n,t,yun,r,a=101,s=0;
     char z,K,F,f[]={'+','-','*','/'};
H:   srand(time(NULL) ); 
        F=f[FANW(0,3)]; 
        K=f[FANW(0,3)]; 
        if(F=='+'&&K=='+')
        {
        	while(a>100)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=(i+j+n);
	        }
	        printf("%d+%d+%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d+%d+%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d+%d+%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='+'&&K=='-')
        {
        	while(a>100||a<0)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=i+j-n;
	        }
	        printf("%d+%d-%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d+%d-%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d+%d-%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='+'&&K=='*') 
        {
        	while(a>100)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=i+(j*n);
	        }
	        printf("%d+%d*%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d+%d*%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d+%d*%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='+'&&K=='/')
        {
        	while(a>100||a<0)  
       	  {
	        	while(j%n!=0)     
   	        {
    	       i=SHUU(); 
               j=SHUU(); 
               n=SHUU();
  	   	       if(j<n)
  	   	      {
                 t=j;
                 j=n;
                 n=t; 	
               }
             }
             a=i+(j/n);
           }
        	
	        printf("%d+%d/%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	j=5;
                	n=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	j=5;
                	n=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d+%d/%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		j=5;
             	        n=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	j=5;
             	        n=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d+%d/%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	j=5;
             	            n=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	j=5;
             	            n=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	j=5;
             	        n=10;
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='-'&&K=='+')
        {
        	while(a>100||a<0)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=(i-j+n);
	        }
	        printf("%d-%d+%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d-%d+%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d-%d+%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='-'&&K=='-')
        {
        	while(a>100||a<0)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=(i-j-n);
	        }
	        printf("%d-%d-%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d-%d-%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d-%d-%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='-'&&K=='*')
        {
        	while(a>100||a<0)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=(i-(j*n));
	        }
	        printf("%d-%d*%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d-%d*%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d-%d*%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='-'&&K=='/')
        {
        	while(a>100||a<0)  
       	  {
       	  	   i=5;j=10;n=20;
        	   while(j%n!=0)     
          	 {
    	       i=SHUU(); 
               j=SHUU(); 
               n=SHUU();
  	   	       if(j<n)
  	   	      {
                 t=j;
                 j=n;
                 n=t; 	
               }
             }
             a=i-(j/n);
           }
           printf("%d-%d/%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	j=5;
                	n=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	j=5;
                	n=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d-%d/%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		j=5;
             	        n=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	j=5;
             	        n=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d-%d/%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	j=5;
             	            n=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	j=5;
             	            n=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	j=5;
             	        n=10;
                    	a=101;
        	            goto B;
                    }
                 }
        
			}
        } 
        else if(F=='*'&&K=='*') 
        {
        	while(a>100)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=i*j*n;
	        }
	        printf("%d*%d*%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d*%d*%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d*%d*%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='*'&&K=='/')
        {
        	while(a>100||a<0)  
       	  {
	        	while(j%n!=0)     
   	        {
    	       i=SHUU(); 
               j=SHUU(); 
               n=SHUU();
  	   	       if(j<n)
  	   	      {
                 t=j;
                 j=n;
                 n=t; 	
               }
             }
             a=i*(j/n);
           }
        	
	        printf("%d*%d/%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	j=5;
                	n=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	j=5;
                	n=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d*%d/%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		j=5;
             	        n=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	j=5;
             	        n=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d*%d/%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	j=5;
             	            n=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	j=5;
             	            n=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	j=5;
             	        n=10;
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='*'&&K=='+')
        {
        	while(a>100)         
    	   {
	    	i=SHUU();         
            j=SHUU(); 
            n=SHUU(); 
            a=i*j+n;
	        }
	        printf("%d*%d+%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d*%d+%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d*%d+%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='*'&&K=='-')
        {
        	while(a>100||a<0)  
       	  {
	         i=SHUU();         
             j=SHUU(); 
             n=SHUU(); 
             a=i*j-n;
           }
        	
	        printf("%d*%d-%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	j=5;
                	n=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	j=5;
                	n=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d*%d-%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		j=5;
             	        n=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	j=5;
             	        n=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d*%d-%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	j=5;
             	            n=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	j=5;
             	            n=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	j=5;
             	        n=10;
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='/'&&K=='+')
        {
        	i=5;j=10;
        	while(a>100||a<0)  
       	  {
	        	while(i%j!=0)     
   	        {
    	       i=SHUU(); 
               j=SHUU(); 
               n=SHUU();
  	   	       if(j<n)
  	   	      {
                 t=j;
                 j=n;
                 n=t; 	
               }
             }
             a=i/j+n;
           }
        	
	        printf("%d/%d+%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	i=5;
                	j=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	i=5;
                	j=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d/%d+%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		i=5;
             	        j=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	i=5;
             	        j=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d/%d+%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	i=5;
             	            j=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	i=5;
             	            j=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	i=5;
             	        j=10;
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='/'&&K=='-')
        {
        	while(a>100||a<0)  
       	  {
       	  	    i=5;j=10;
	        	while(i%j!=0)     
   	        {
    	       i=SHUU(); 
               j=SHUU(); 
               n=SHUU();
  	   	       if(i<j)
  	   	      {
                 t=i;
                 i=j;
                 j=t; 	
               }
             }
             a=i/j-n;
           }
        	
	        printf("%d/%d-%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	i=5;
                	j=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	i=5;
                	j=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d/%d-%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		i=5;
             	        j=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	i=5;
             	        j=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d/%d-%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	i=5;
             	            j=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	i=5;
             	            j=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	i=5;
             	        j=10;
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='/'&&K=='*')
        {
        	while(a>100||a<0)  
       	  {
       	  	i=5;j=10;
	        	while(i%j!=0)     
   	        {
    	       i=SHUU(); 
               j=SHUU(); 
               n=SHUU();
  	   	       if(j<n)
  	   	      {
                 t=j;
                 j=n;
                 n=t; 	
               }
             }
             a=i/j*n;
           }
        	
	        printf("%d/%d*%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	i=5;
                	j=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	i=5;
                	j=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d/%d*%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		i=5;
             	        j=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	i=5;
             	        j=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d/%d*%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	i=5;
             	            j=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	i=5;
             	            j=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	i=5;
             	        j=10;
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
        else if(F=='/'&&K=='/')
        {
        	int no1,no2;
        	int arr[3];
        	while(a>100||a<0)  
       	  {
       	  	i=5;j=10;n=20;
	        	while(i%j!=0||n%j!=0||j%i!=0)     
   	        {
    	       
			   i=SHUU(); 
               j=SHUU(); 
               n=SHUU();
               arr[0]=i;
               arr[1]=j;
               arr[2]=n;
               for(no1=1;no1>=0;no1--)
            	{
		            for(no2=0;no2<=no1;no2++)
		           {
			             if(arr[no2]>arr[no2+1])
		                {
				            int z;
				            z = arr[no2+1];
				            arr[no2+1]=arr[no2];
			              	arr[no2] = z;
			            }
		           }
	             }
	             i=arr[2];
	             j=arr[1];
	             n=arr[0];
             }
             a=i/j/n;
           }
        	
	        printf("%d/%d/%d=",i,j,n);
            scanf("%d",&r);
            if(r==a)
            {
            	printf("Right !\n\Continue? y/n\n");
                scanf("%s",&z);
                if(z=='y')
                {
                	i=5;
                	j=10;
                	a=101;        
                 	goto H;
                }
                else if(z=='n')
                {
                	i=5;
                	j=10;
              	    a=101;
              	    goto B;
                }
            }
            else
			{
				 printf("Wrong ! Please try again.\n");
            	 printf("%d/%d/%d=",i,j,n);
                 scanf("%d",&r);
                 if(r==a)
                 {
                 	printf("Right !\n\Continue? y/n\n");
                 	scanf("%s",&z);
                 	if(z=='y')
                 	{
                 		i=5;
             	        j=10;
	                 	a=101;
	                 	goto H;
                    }
                    else if(z=='n')
                    {
                    	i=5;
             	        j=10;
	                 
                    	a=101;
              	        goto B;
                    }
                 }
                 else
                 {
                 	printf("Wrong ! Please try again.\n");
            	    printf("%d/%d/%d=",i,j,n);
                    scanf("%d",&r);
                    if(r==a)
                    {
                    	printf("Right !\n\Continue? y/n\n");
                 	    scanf("%s",&z);
                 	    if(z=='y')
                 	    {
                 	    	i=5;
             	            j=10;
    	                 	a=101;
	                 	    goto H;
    	                }
    	                else if(z=='n')
    	                {
    	                	i=5;
             	            j=10;
                	    	a=101;
              	            goto B;
                	    }
                    }
                    else
					{
                    	printf("Wrong ! You have tried 3times! Test over!\n");
                    	i=5;
             	        j=10;
                    	a=101;
        	            goto B;
                    }
                 }
            }
        }
    }
    
    
    
    
    
    
    
    
    
    else if(mod==4)         //�ӳٹرգ����ĺö��� 
    {
	   printf("---------------------------------------\n\
���ڹرճ���");
    Sleep(1000); 
    printf(".");
    Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	} 
}
    