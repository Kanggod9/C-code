int s=0 ;

main() 
{
	int n ;
	scanf("%d",&n) ;
	fun(n,'a','b','c') ;
}

void fun(int m,char one,char two,char three)
{
	if(m==1) move(one,three);
	else 
		{
			fun(m-1,one,three,two);
			move(one,three) ;
			fun(m-1,two,one,three);
			move(one,three);
			
			
		}	
}

void move (char x,char y)
{
	s=s+1 ;
	printf("%d:%c--->%c\n",s,x,y);
	
	
}




