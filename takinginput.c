#include<stdio.h>
int main(){
int i;
struct student {
    char name[20];
    char grade;
    int phn;
};
for(i=1;i<=4;i++){
    struct student i;
     char name[20];
    char grade;
     int phn;
    printf("enter name of student:\n");
   scanf("%s",i.name);
   printf("enter grade\n");
   scanf("%c",&i.grade);
   printf("enter mobile no.\n");
    scanf("%d",&i.phn);
}  

return 0;
}