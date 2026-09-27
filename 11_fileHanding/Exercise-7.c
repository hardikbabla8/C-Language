/* 
Create a structure Student with members name and marks. Write 
multiple student records to a binary file using fwrite()
and then read them back using fread() . 
*/

#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main(){
    struct Student students[3];
    struct Student temp; 
    FILE *file;
    int i;
    
    printf("===== Enter Student Details =====\n");
    
    for (i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", (i + 1));
        
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); 
        
        printf("Marks: ");
        scanf("%d", &students[i].marks); 
    }
    
    file = fopen("studentData.bin", "wb"); 
    
    if (file == NULL) {
        printf("Error: Failed to open file.\n");
        return 1;
    }

    fwrite(students, sizeof(struct Student), 3, file);

    fclose(file);

    file = fopen("studentData.bin", "rb");

    if (file == NULL) {
        printf("Error: Failed to open file.\n");
        return 1;
    }
    
    printf("\n-------- Student Records --------\n\n");
    
    while (fread(&temp, sizeof(struct Student), 1, file) == 1) {
        printf("Name: %s\n", temp.name);
        printf("Marks: %d\n\n", temp.marks); 
    }

    printf("---------------------------------\n");
    
    fclose(file);
    
    return 0;
}