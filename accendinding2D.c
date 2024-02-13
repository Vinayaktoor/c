/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int** nums, int numsSize, int* numsColSize, int* returnSize) {
    
}
#include<stdio.h>
int main(){
void swap(int* n,int* m){
   int temp;
   temp = *n;
   *n = *m;
   *m = temp;
   return;
}

int arr[][4]={{3,1,2,4},{9,3,4,1}};
for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        for(int k=0;k<4-1;k++){
            
            if(arr[i][k]>arr[i][k+1]){
                swap(&arr[i][k],&arr[i][k+1]);
            }
            
            
        }
        
        
    }
}
      
for(int i=0;i<2;i++){
    for(int j=0;j<4;j++){
        
        printf("%d",arr[i][j]);
        
        
    }
    printf("\n");
}










return 0;
}