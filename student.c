    #include <stdio.h>
    #include <string.h>
    int main (){
        int n;
        printf("enter no. of student");
        scanf("%d",&n);
    struct student{
        char arr[15];
        int age;
    };
    struct student std[n];
    for(int i=0;i<n;i++){
                int a;
        std[i].age = a;
        printf("enter %d student's age",i);
        scanf("%d",&a);
        printf("enter name:");
        scanf("%s",std[i].arr);
    
    }
    for(int i=0;i<n;i++){
        printf("%d",std[i].age);
       printf("%s",std[i].arr);
    
    }
    

        return 0;
    }