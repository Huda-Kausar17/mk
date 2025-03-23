#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h>
int isPow2(long unsigned int);
unsigned long int largePow(long unsigned int); 
int main() {
int t,i,win;
long unsigned int n; 
scanf("%d",&t);
for(i=0;i<t;++i){
win=0;
scanf("%lu",&n);
if(n==1)
printf("Richard\n");
else{
while(n!=1){
if(isPow2(n))
n>>=1;
else
n-=largePow(n);
++win;
}
}
if(win%2==0)
printf("Richard\n");
else
printf("Louise\n");
}
return 0;
}
int isPow2(long unsigned int n){
return !(n&(n-1));
}
long unsigned int largePow(long unsigned int n){
long unsigned int m; 
while(n){
m=n;
n=n&(n-1);
}
return m;
}