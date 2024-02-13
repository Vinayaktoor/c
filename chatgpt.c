#include <stdio.h>
#include <string.h>

typedef struct student {
    char name[50];
    int phn_no;
    float marks;
    char grade;
} student;

int main() {
    int n;
    printf("no. of student:");
    scanf("%d",&n);
    student arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter name of student: ");
        char temp[50];
        fgets(temp, sizeof(temp), stdin);
        strcpy(arr[i].name, temp);

        printf("Enter phone no: ");
        scanf("%d", &arr[i].phn_no);

        printf("Enter marks: ");
        scanf("%f", &arr[i].marks);

        printf("Enter grade: ");
        scanf(" %c", &arr[i].grade);  // Notice the space before %c to consume the newline character
    }

    printf("Name of the third student: %s", arr[2].name);

    return 0;
}
