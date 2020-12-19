
int b[1000];
int i=0,j ;
int main() 

{
	int a ;
	scanf ("%d",&a);
	f(a);
printf("%d",b[i-2])	;
//	for(j=i-1;j>=0;j--)
//	printf ("%d",b[j]);
}



void f(int c)
	{
	if (c==0) return;
	else if(c<10) 
		{
			
			b[i]=c;
			i++	;		
			return;
		}
		else
		{
			
			b[i]=c%10;
			i++  ;			
			f(c/10);
			
			}	
			
			
    }
