#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int n,i;
FILE *in , *out;
char ts1[14]={"\0"}; //��ת���� 
char ts2[14]={"\0"}; //��ת����  

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
	fscanf(p,"%s",p[i].name);//�������� 
	fun(p);
    }
	for(i=0;i<n;i++)
	{
	fprintf(p,"%s %d/n",p[i].name,p[i].rest);
    }
	
 
	
			
	
	
	
}

void fun(struct pepole p[])     
{
fscanf(p,"%d",&n);// ��ȡ���� 
	for (i=0;i<n;i++)//ѭ������ 
		fscanf(p,"%s",&p[i].name);//�����ָ�ֵ 
		fscanf(p,"%s",ts1);//������ת

for (i=0;i<n;i++)
		if(strcmp(p[i],ts1)==0)//�ж���������һ��
			{fscanf(p,"%d" "%d",&p[i].money,&p[i].friends) ;//����Ǯ�ͷָ����� 
			 p[i].rest=p[i].money%p[i].friends ;//��Ǯ��ʣ�µ�Ǯ
			}
			for (i=0;i<p[i].friends;i++)//���ھ��������ѷ�Ǯ
				fscanf(p,"%d",ts2);//��ֵ������תվ 
				if(strcmp((p[i].name,ts2)==0) // ƥ�� 
					p[i].rest=p[i].money/p[i].friends;//Ǯ�ָ������� 
}

