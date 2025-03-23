#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h> 
#include <assert.h>
void insertionSort(int ar_size, int * ar) {
for (int i = 1; i < ar_size; ++i) {
int j = i - 1;
int p = ar[i];
while (j >= 0 && p < ar[j]) {
ar[j+1] = ar[j];
j--;
}
ar[j+1] = p;
printf("%d", ar[0]);
for (int k = 1; k < ar_size; ++k){
printf(" %d", ar[k]);
}
printf("\n");
}
}
int main() {
int _ar_size; 
scanf("%d", &_ar_size);
int _ar[_ar_size], _ar_i;
for(_ar_i = 0; _ar_i < _ar_size; _ar_i++){
scanf("%d", &_ar[_ar_i]);
}
insertionSort(_ar_size, _ar);
return 0;
}
