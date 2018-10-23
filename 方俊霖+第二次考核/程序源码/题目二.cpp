#include<stdio.h>
#include<stdlib.h>
#define FANW(a,b) (rand()%((b-a+1)) + (a))  //定义一个范围，可以用rand生成（a-b）的随机数的 
#define SHUU() FANW(1, 100)          // 定义生成随机数的范围，并使SHUU的为该范围 
#include<time.h>                    // 以时间作为随机的种子，似乎同一秒内输出的式子相等，但如果是正经做题而不是胡乱输入，一秒换一次已经够用了 
#include<windows.h>

int main()
{
B:	int mod;
    printf("====四则运算CAL系统====\n\
1.简单模式\n\
2.疯狂模式\n\
3.困难模式\n\
4.退出系统\n\
请选择：");
    scanf("%d",&mod); 
    
    if(mod==1)
    {

    int i,j,t,r,a,s=0;
    char z,F,f[]={'+','-','*','/'};
A:    srand(time(NULL) );          //请确保每一次循环时间大于1秒钟，否则时间相同时候出现同样的值 
    F=f[FANW(0,3)];            //随机生成符号，赋值给F 
    if(F=='+')
    {
   		
       	
	   while(a>100)         //利用while循环实现计算结果小于等于100 
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
                 a=101;        //赋值a=101，使跳回上面时候可以重新进行循环，获得新的随机数，下面乘号时也是同理 
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
          t=i;                   //交换值，下同 
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
 E:     while(i%j!=0)      //让计算结果为整数，使程序不生成类似7/3的算式 
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
            	i=5;          //必须要给i，j重新赋值，一开始想在开头赋值的，可是程序会报错 
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
            	FEN++;            //这里是加分吖 
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
     printf("您的正确率为%d%%，",TURE);
     if(FEN>7.5)
	 {
	 	printf("高于75%%，返回主界面。\n");
      	goto B;
 	 } 
 	 else
  	 {
  	 	printf("低于75%%，请重新做题。\n"); 
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
    
    
    
    
    
    
    
    
    
    else if(mod==4)         //延迟关闭，真心好东西 
    {
	   printf("---------------------------------------\n\
正在关闭程序");
    Sleep(1000); 
    printf(".");
    Sleep(1000);
	printf(".");
	Sleep(1000);
	printf(".");
	Sleep(1000);
	} 
}
    