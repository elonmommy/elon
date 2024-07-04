#include <stdio.h>
#include <stdlib.h>
int a[200],i,j,k,l,sum,n;
int com(const void *xx, const void *yy)
{
if(*(int *)xx > *(int*)yy) return -1;
return 1;
}
int main()
{
scanf("%d %d\n",&n,&k);
for(i=0;i<n;i++) 
scanf("%d",a+i);
qsort(a,n,sizeof(a[0]),com); // sorts in descending order of price
sum = 0;
for(i=0;i<n;i++) 
 sum+= a[i]*(1+i/k);
printf("%d\n",sum);
return 0;
}
