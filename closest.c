#include<stdio.h>
#include<stdlib.h>
void quickSort(int[], int, int);
int partition(int[], int, int);
int main(){
int i,n;
//input
scanf("%d",&n);
int *a=(int *)malloc(n*sizeof(int));
for(i=0;i<n;i++)
scanf("%d",&a[i]);
//sorting
quickSort(a,0,n-1);
//finding smallest
int min=a[1]-a[0];
for(i=2;i<n;i++)
if(a[i]-a[i-1]<min) min=a[i]-a[i-1];
//printing all pairs
for(i=1;i<n;i++)
if(a[i]-a[i-1]==min) printf("%d %d ",a[i-1],a[i]);
printf("\n");
return 0;
}
void quickSort(int a[], int l, int r)
{
 int j;
 if( l < r ) 
 {
 // divide and conquer
 j = partition( a, l, r);
 quickSort( a, l, j-1);
 quickSort( a, j+1, r);
 }
}
int partition(int a[], int l, int r) {
 int pivot, i, j, t;
 pivot = a[l];
 i = l; j = r+1;
 while( 1)
 {
 do ++i; while( a[i] <= pivot && i <= r );
 do --j; while( a[j] > pivot ); 
 /*do ++i; while( a[i] >= pivot && i <= r );
 do --j; while( a[j] < pivot );*/
 if( i >= j ) break;
 t = a[i]; a[i] = a[j]; a[j] = t;
 }
 t = a[l]; a[l] = a[j]; a[j] = t;
 return j;
}