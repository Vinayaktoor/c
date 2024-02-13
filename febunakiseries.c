#include<stdio.h>
int main(){
    int n,n1,n2,n3,sum;
    scanf("%d",&n);
    n1=0,n2=1;
    printf("%d    %d",n1,n2);
    for(int i=3;i<=n;i++){
        sum=n1+n2;
        printf("\t%d",sum);
        n1=n2;
        n2=sum;
    }

    return 0;
}