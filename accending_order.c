#include<stdio.h>
#include"swap.c"
int main(){
    int n,i=0;
    int vt[]={3,9,2,4,3,8,'\0'};
   int sum = 0;
   while(vt[i]!='\0'){ 
      sum++;
       i++;
   }
   printf("size of array:%d\n",sum);
                   for(i=0;i<=sum-1;i++){
                                      
      for(int j=i+1;j<=sum-1;j++){
                                       if(vt[i]>vt[j]){
                                      swap(&vt[i],&vt[j]);}
        }
                   }
  printf("new array:");
                      for(i=0;i<=sum-1;i++){
                       printf("%d",vt[i]);
   }
    return 0;
}