#include <stdio.h> 
#include <string.h> 
#include <math.h> 
#include <stdlib.h>
int the_power_sum(int n, int m,int p){
int tmp = pow(m,p);
if(tmp == n) return 1;
if(tmp > n) return 0;
return the_power_sum(n,m+1,p) + the_power_sum(n-tmp, m+1,p);
}
int main(){
int n,p;
scanf("%d%d",&n,&p);
printf("%d", the_power_sum(n,1,p));
return 0;
}