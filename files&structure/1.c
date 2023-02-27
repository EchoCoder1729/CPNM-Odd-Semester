#include <stdio.h>
#include <stdlib.h>

#define MAX_STUDENTS 100

struct student {
    int roll_number;
    char name[50];
    char department[50];
    char course[50];
    int year_of_joining;
    int marks[6];
    float average;
};

struct student students[MAX_STUDENTS];
int num_students = 0;

// Function to print the names of all students who joined in a particular year.
void print_students_by_year(int year) {
    int i;
    for (i = 0; i < num_students; i++) {
        if (students[i].year_of_joining == year) {
            printf("%s\n", students[i].name);
        }
    }
}

// Function to print the data of a student whose roll number is given.
void print_student_by_roll(int roll) {
    int i;
    for (i = 0; i < num_students; i++) {
        if (students[i].roll_number == roll) {
            printf("Roll Number: %d\n", students[i].roll_number);
            printf("Name: %s\n", students[i].name);
            printf("Department: %s\n", students[i].department);
            printf("Course: %s\n", students[i].course);
            printf("Year of Joining: %d\n", students[i].year_of_joining);
            printf("Marks:\n");
            int j;
            for (j = 0; j < 6; j++) {
                printf("%d ", students[i].marks[j]);
            }
            printf("\n");
            return;
        }
    }
    printf("Student not found.\n");
}

// Function to create and store student information in a text file.
void store_students_to_file(char *filename) {
    FILE *fp;
    fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file %s.\n", filename);
        return;
    }
    int i, j;
    for (i = 0; i < num_students; i++) {
        fprintf(fp, "%d %s %s %s %d ", students[i].roll_number, students[i].name, students[i].department, students[i].course, students[i].year_of_joining);
        for (j = 0; j < 6; j++) {
            fprintf(fp, "%d ", students[i].marks[j]);
        }
        fprintf(fp, "\n");
    }
    fclose(fp);
}

// Function to input student data.
void input_students() {
    int i;
    printf("Enter the number of students to input: ");
    scanf("%d", &num_students);
    for (i = 0; i < num_students; i++) {
        printf("Enter data for student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_number);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Department: ");
        scanf("%s", students[i].department);
        printf("Course: ");
        scanf("%s", students[i].course);
        printf("Year of Joining: ");
        scanf("%d", &students[i].year_of_joining);
        printf("Marks (6 subjects): ");
        int j;
        for (j = 0; j < 6; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }
}

// Function to print the rank list in ascending order based on the average marks of six subjects
void print_rank_list()
{
    // Calculate the average marks for each student
    for (int i = 0; i < num_students; i++) {
        float total = 0;
        for (int j = 0; j < 6; j++) {
            total += students[i].marks[j];
        }
        students[i].average = total / 6.0;
    }
    // Sort the students in ascending order based on the average marks
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = i + 1; j < num_students; j++) {
            if (students[i].average > students[j].average) {
                // Swap the students
                struct student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    // Print the rank list
    printf("Rank\tRoll Number\tName\t\tDepartment\tAverage\n");
    for (int i = num_students-1; i >=0; i--) {
        printf("%d\t%d\t\t%s\t\t%s\t\t%.2f\n", num_students-i, students[i].roll_number, students[i].name, students[i].department, students[i].average);
    }
}


int main() {
    input_students();
    int yr,r;
    printf("Enter the desired year: ");
    scanf("%d",&yr);
    print_students_by_year(yr);
    store_students_to_file("students.txt");
    printf("Enter the desired roll number");
    scanf("%d",&r);
    print_student_by_roll(r);
    print_rank_list();
    return 0;
}
