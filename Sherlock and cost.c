#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
int main() {
int T,N,B,L,R,ML,MR,X,Y,P,Q;
scanf("%d",&T);
for(int i = 0; i < T; i++) {
scanf("%d",&N);
for(int j = 0; j < N; j++) {
scanf("%d",&B);
if(j) {
X = L - 1 + ML;
Y = R - 1 + MR;
P = abs(L - B) + ML;
Q = abs(R - B) + MR;
ML = (X>Y ?X:Y);
MR = (P > Q? P:Q);
} else {
ML =MR= 0;
}
L = 1;
R = B;
}
printf("%d\n", (ML > MR ? ML : MR));
}
return 0;
}
