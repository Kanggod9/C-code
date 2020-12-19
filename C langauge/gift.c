#include <stdio.h>
#include <stdlib.h>
void 
main () {
    FILE *fin  = fopen ("gift1.in", "r");
    FILE *fout = fopen ("gift1.out", "w");
    int a, k, i, m, n, num = 0, money = 0, mon[10] = {0};
    char name[10][14], str[14];
    fscanf (fin, "%d", &a);
    for(i = 0; i < a; i ++)
    {
    	fscanf(fin, "%s", name[i]);
	}
	for(i = 0; i < a; i ++)
	{
		fscanf(fin, "%s", str);
		for(n = 0; n < a; n++)
		{
			if(strcmp(name[n], str) == 0)
		{
			fscanf(fin, "%d %d", &money, &num);
			if(money == 0 || num == 0)
			{
				break;
			}
			mon[n] += money % num - money;
			for(k = 0; k < num; k ++)
			{
				fscanf(fin, "%s", str);
				for(m = 0; m < a; m ++)
				{
					if(strcmp(name[m], str) == 0)
					{
						mon[m] += money / num;
					    break; 
					}
				}
			}
			break;
		}
		}
		
	}
	for(i = 0; i < a; i ++)
	{
		fprintf(fout, "%s %d\n", name[i], mon[i]);
	}
    



