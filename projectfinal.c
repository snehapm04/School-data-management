#include <stdio.h>
#include<stdlib.h>
//add a new student record
void addStudentRecord() {
    char name[50];
    int rollNo;
    float fees;
    FILE *file = fopen("student_data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter student roll number: ");
    scanf("%d", &rollNo);
    printf("Enter fee paid by student: ");
    scanf("%f", &fees);

    fprintf(file, "%s %d %.2f\n", name, rollNo, fees);
    fclose(file);

    printf("Student record added successfully.\n");
}

// to search for a student record by roll number
void searchStudentByRollNo() {
    int rollNo;
    char name[50];
    int fileRollNo;
    float fees;
    float tfees=100000;
    int found = 0;
    FILE *file = fopen("student_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter student roll number: ");
    scanf("%d", &rollNo);



    while (fscanf(file, "%s %d %f", name, &fileRollNo, &fees) != EOF) {
        if (fileRollNo == rollNo) {
            found = 1;
            printf("********************************************");
            printf("\n**Student details:**\n");
            printf("Name: %s\n", name);
            printf("Roll number: %d\n", fileRollNo);
            printf("Fees: Rs %.2f\n", fees);
            printf("Due fees: Rs %.2f\n",(tfees-fees));
            printf("********************************************");
            break;
        }
    }

    fclose(file);

    if (!found) {
        printf("Student with roll number %d not found.\n", rollNo);
    }
}
//add staff record
void addstaff(){
    char name[50];
    int ID;
    float sal;
    FILE *file = fopen("staff_data.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter staff name: ");
    scanf("%s", name);
    printf("Enter staff ID: ");
    scanf("%d", &ID);
    printf("Enter salary of staff: ");
    scanf("%f", &sal);

    fprintf(file, "%s %d %.2f\n", name,ID,sal);
    fclose(file);

    printf("**Staff record added successfully.**\n");

}
// display staff details n salary
void displaydata(){
    int ID;
    char name[50];
    int fileID;
    float sal;
    int found = 0;
    FILE *file = fopen("staff_data.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return;
    }

    printf("Enter staff ID: ");
    scanf("%d", &ID);

    while (fscanf(file, "%s %d %f", name, &fileID, &sal) != EOF) {
        if (fileID == ID) {
            found = 1;
            printf("********************************************");
            printf("\n**Staff details**\n");
            printf("Staff Name: %s\n", name);
            printf("ID: %d\n", fileID);
            printf("Current Salary: Rs %.2f\n", sal);
            printf("********************************************");
            break;
        }
    }

    fclose(file);

    if (!found) {
        printf("Staff with ID %d not found.\n", ID);
    }

}

int main() {
    int choice;
    system("cls");
    do {
        printf("\n\n\n****School Billing System****\n");
        printf("********************************************\n");
        printf("1. Add Student Record\n");
        printf("2. Search Student by Roll Number to find fee details\n");
        printf("3. Add staff data\n");
        printf("4. Display staff data along with salary\n");
        printf("5. Exit\n");
        printf("********************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addStudentRecord();
                break;
            case 2:
                searchStudentByRollNo();
                break;
            case 3:
                addstaff();
                break;
            case 4:
                displaydata();
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}
