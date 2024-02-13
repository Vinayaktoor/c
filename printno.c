#include<stdio.h>
void print(int n){
    if(n==0) return; 
   printf("%d",n);
    print(n-1);
    return;
}
int main(){
int n;
printf("enter a no.:");
scanf("%d",&n);
print(n);
 return 0;
}