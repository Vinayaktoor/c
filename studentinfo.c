#include<stdio.h>
#include<string.h>
int main(){
     int n;
    printf("no. of student:");
    scanf("%d",&n);
typedef struct student{
    char name[50];
    int phn_no;
    float marks;
    char grade; 
}student;
     student arr[n];
     for(int i=0;i<n;i++){
               printf("enter name of student:");
               char temp[50];
    scanf("%s",temp);//use "_"before entring surname
    strcpy(arr[i].name,temp);
               printf("\n enter phone no:");
               scanf("%d",&arr[i].phn_no);

     printf("\n enter marks:");
   scanf("%f",&arr[i].marks);

                 printf("\n enter grade:");
                 scanf(" %c",&arr[i].grade);
     }
printf("%s",arr[2].name);



    return 0;
}