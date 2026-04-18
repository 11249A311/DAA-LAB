#include<stdio.h>
void toh(intn, chars, char D char T) {
if (n = = 1) {
printf ("\n Move disk %  d from to %c", n,S, D) ;
return;
}
toh (n-1, s, T,D);
printf(" \n Move disk %d from % c to % c", n,s, D);
toh (n-,T, D, S);
}
int main(){
int n;
printf (" Enter number of disks:");
Scanf ("/d", &n);
toh (n,'s','D','T');
return 0;
У
