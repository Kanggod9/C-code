#include <stdio.h>

main()

{int i,j,a[6][6];

for(i=0;i<=5;i++)

{a[i][i]=1;a[i][0]=1;}

for(i=2;i<=5;i++)

for(j=1;j<=i-1;j++)

a[i][j]=a[i-1][j]+a[i-1][j-1];

for(i=0;i<=5;i++)

{for(j=0;j<=i;j++)

printf("%4d",a[i][j]);

printf("\n");}

} 
