#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
void swap(int *a,int *b)
{
 int temp;
 temp = *a;
 *a = *b;
 *b=temp;
}
int partition(int *x,int start,int end)
{
 int pivot,pindex,i;
 pivot = x[end];
 pindex = start;
 for(i=start;i<end;i++)
 {
 if(x[i]>=pivot)
 {
 swap(&x[i],&x[pindex]);
 pindex = pindex + 1;
 }
 }
 swap(&x[pindex],&x[end]);
 return pindex;
}
void quicksort(int *x,int start,int end)
{
 if(start<end)
 {
 int i = partition(x,start,end);
 quicksort(x,start,i-1);
 quicksort(x,i+1,end);
 }
}
int main(){
 int n, calories_i, *calories; 
 int i;
 int sum = 0;
 scanf("%d",&n);
 calories = malloc(sizeof(int) * n);
 for(calories_i = 0; calories_i < n; calories_i++)
 {
 scanf("%d",&calories[calories_i]);
 }
 quicksort(calories,0,n-1);
 
 for(i=0;i<n;i++)
 {
 sum += calories[i]*((int)pow(2,i));
 } 
 printf("%d",sum);
 // your code goes here
 return 0;
}
