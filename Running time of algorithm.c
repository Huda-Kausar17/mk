#include <stdio.h>
#include <string.h> 
#include <math.h> 
#include <stdlib.h> 
#include <assert.h>
void insertionSort(int ar_size, int * ar,int *shifts) {
int temp=ar[ar_size-1],i;
for(i=ar_size-2;i>=0;i--){
if(ar[i]>temp){
ar[i+1]=ar[i];
*shifts=*shifts+1;
}
else 
break;
}
ar[i+1]=temp;
}
int main() {
int _ar_size,i,j,shifts=0; 
scanf("%d", &_ar_size); 
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++) { 
scanf("%d", &_ar[_ar_i]);
}
for(i=2;i<=_ar_size;i++){
insertionSort(i, _ar,&shifts);
}
printf("%d",shifts); 
return 0;
}
