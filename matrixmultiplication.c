#include<stdio.h>
int main(){
int a,b,c,d;
printf("enter row and colum of 1st matrix");
scanf("%d %d",&a,&b);

printf("enter row and colum of 2nd matrix");
scanf(" %d %d",&c,&d);
if (b==c){
    int mat1[a][b];
    int mat2[c][d];
    int sol[a][d];
    printf("enter matrix 1");
for(int i=0;i<a;i++){
     for (int j=0;j<b;j++){
        printf("enter %d %d element",i,j);
        scanf("%d",&mat1[i][j]);
     }
                       }
   printf("enter matrix 2");
for(int i=0;i<c;i++){
     for (int j=0;j<d;j++){
        printf("enter %d %d element",i,j);
        scanf("%d",&mat2[i][j]);
     }
}
  
  for(int i=0;i<a;i++){
    for(int j=0;j<c;j++){ 
        int sum=0;
        for(int k=0;k<b;k++){
            sum+=mat1[i][k]*mat2[k][j];
        }
     sol[i][j]=sum;}
  }

printf("the multiplied array is");
   for(int i=0;i<a;i++){
    for(int j=0;j<d;j++){
        printf("\t %d",sol[i][j]);
         }
         printf("\n");
   }

}
    return 0;
}