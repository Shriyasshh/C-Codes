#include <stdio.h>
#include <string.h>

struct StudentStruct {
    char name[20];
    int age;
    float marks;
};

union StudentUnion {
    char name[20];
    int age;
    float marks;
};

int main() {
    struct StudentStruct student1;
    strcpy(student1.name, "Alice");
    student1.age = 20;
    student1.marks = 85.5;

    printf("Structure Data:\n");
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("Marks: %.2f\n", student1.marks);

    union StudentUnion student2;
    strcpy(student2.name, "Bob");
    printf("\nUnion Data (Name assigned):\n");
    printf("Name: %s\n", student2.name);

    student2.age = 22;
    printf("Union Data (Age assigned):\n");
    printf("Age: %d\n", student2.age);
    printf("Name (corrupted): %s\n", student2.name);

    student2.marks = 90.0;
    printf("Union Data (Marks assigned):\n");
    printf("Marks: %.2f\n", student2.marks);
    printf("Age (corrupted): %d\n", student2.age);

    return 0;
}