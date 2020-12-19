//³ÂÒ»ÃúÎÒ¶ù×Ó 
int sum=0 ;

main()


{
	int a;
	scanf("%d",&a) ;
	f(a) ;
	
	
	
}


void f(int x)
{
	if(x==0)  return;
	else if(x<10)
		{ printf("%d",x);
          sum=sum+x ;
		  return;    		}
			else 
			
				printf("%d",x%10) ;
		        sum=sum+x%10 ;
		        f(x/10);
			

			
		
	}
	
	

