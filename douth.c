#include<stdio.h>
int main(){
    int n=0;
    for(int i = 1;i<=10;i++){
        for (int j=5;j<=10;j++){
            if (i==j){
                break;
            }printf("%d",n);
        }
        printf("%d",i);
    }
    return 0;
}