#include<stdio.h>
void quicksort(int x[100000],int first,int last){
 int pivot,j,temp,i;
 if(first<last){
 pivot=first;
 i=first;
 j=last;
 while(i<j){
 while(x[i]<=x[pivot]&&i<last)
 i++;
 while(x[j]>x[pivot])
 j--;
 if(i<j){
 temp=x[i];
 x[i]=x[j];
 x[j]=temp;
 }
 }
 temp=x[pivot];
 x[pivot]=x[j];
 x[j]=temp;
 quicksort(x,first,j-1);
 quicksort(x,j+1,last);
 }}
int main()
{
int n,k,i,avail=0,count=0;
int cost[n];
scanf("%d",&n);
scanf("%d",&k);
for(i=0;i<n;i++)
scanf("%d",&cost[i]); 
quicksort(cost,0,n-1);
while(avail<=k)
{
avail+=cost[count]; 
count++;
} 
printf("%d\n",count-1); 
return 0; }
