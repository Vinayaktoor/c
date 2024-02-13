#include <stdio.h>
#include <string.h>

struct student {
    int age;
    char arr[15]; // Assuming you want to store a string of up to 15 characters
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student std[n];

    for (int i = 0; i < n; i++) {
        printf("Enter student %d's age: ", i + 1);
        scanf("%d", &std[i].age);
        
        printf("Enter age: ");
        scanf("%s", std[i].arr);
    }

    for (int i = 0; i < n; i++) {
        printf("Student %d - Age: %d, Age String: %s\n", i + 1, std[i].age, std[i].arr);
    }

    return 0;
}