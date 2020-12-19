#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n,i;
FILE *in , *out;
char ts1[14]={"\0"}; //中转功能 
char ts2[14]={"\0"}; //中转功能  

struct pepole{
	char name[10]; 
	int  money;
	int  rest;
	int  friends;	
} p[14];



main()
{
	in=fopen("gift1.in","r") ;
     out=fopen("gift1.out","r") ;
	
	 

	for(i=0;i<n;i++)
	{
	fscanf(p,"%s",p[i].name);//输入名字 
	fun(p);
    }
	for(i=0;i<n;i++)
	{
	fprintf(p,"%s %d/n",p[i].name,p[i].rest);
    }
	
 
	
			
	
	
	
}

void fun(struct pepole p[])     
{
fscanf(p,"%d",&n);// 读取行数 
	for (i=0;i<n;i++)//循环行数 
		fscanf(p,"%s",&p[i].name);//将名字赋值 
		fscanf(p,"%s",ts1);//带入中转

for (i=0;i<n;i++)
		if(strcmp(p[i],ts1)==0)//判断人名是哪一个
			{fscanf(p,"%d" "%d",&p[i].money,&p[i].friends) ;//输入钱和分给的人 
			 p[i].rest=p[i].money%p[i].friends ;//分钱人剩下的钱
			}
			for (i=0;i<p[i].friends;i++)//现在决定给朋友分钱
				fscanf(p,"%d",ts2);//将值代入中转站 
				if(strcmp((p[i].name,ts2)==0) // 匹配 
					p[i].rest=p[i].money/p[i].friends;//钱分给其他人 
}

