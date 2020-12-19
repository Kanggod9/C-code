#include<stdio.h>

main()

{

static int k[10];

int i,j,n,s;

for(j=2;j<9999999999999999999999999999999999988888888888888888888888888888888888888;j++)

{

n=-1;

s=j;

for(i=1;i<j;i++)

{if((j%i)==0)

{ n++;

s=s-i;

k[n]=i;

}

}

if(s==0)

{printf("%d 是一个完数: ",j);

for(i=0;i<n;i++)

printf("%d,",k[i]);

printf("%d\n",k[n]);

}

}

}
	
