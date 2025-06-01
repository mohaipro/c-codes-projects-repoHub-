/**
 * Student Information System (SIS)
 * --------------------------------
 * This C program allows a user to enter and manage student records for a class.
 * Features:
 * - Enter multiple student details (first name, last name, age, grade).
 * - Display all student records.
 * - Modify individual fields (name, age, grade) for any student.
 * - ASCII art intro and outro to enhance user interface.
 *
 * Author: [MM]
 * Date: [6/1/2025]
 */

#include <stdio.h>
#include <string.h>

// Define a student struct
struct Student {
    char fname[10];
    char lname[10];
    int age;
    float grade;
};

// Utility function to clear the input buffer
void flush_input_buffer() {
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

// Function to display student information
void display_student_info(struct Student S) {
    printf("########################################\n");
    printf("Hello and Welcome to Student Info System\n");
    printf("Student First Name: %s\n", S.fname);
    printf("Student Last Name: %s\n", S.lname);
    printf("Student Age: %d\n", S.age);
    printf("Student Grade [GPA]: %.1f\n", S.grade);
    printf("########################################\n");
}

// Function to collect input and create a new student record
struct Student create_student(void) {
    char fname[10], lname[10];
    int age;
    float grade;

    printf("Enter first name: ");
    scanf("%9s", fname);
    flush_input_buffer();

    printf("Enter last name: ");
    scanf("%9s", lname);
    flush_input_buffer();

    printf("Enter age: ");
    scanf("%d", &age);
    flush_input_buffer();

    printf("Enter grade [GPA]: ");
    scanf("%f", &grade);
    flush_input_buffer();

    struct Student s;
    s.age = age;
    s.grade = grade;
    strcpy(s.fname, fname);
    strcpy(s.lname, lname);
    return s;
}

// Functions to update student fields
void change_fname(struct Student* ptr) {
    char fname_new[10];
    printf("Enter the (New) first name: ");
    scanf("%9s", fname_new);
    flush_input_buffer();
    strcpy(ptr->fname, fname_new);
}

void change_lname(struct Student* ptr) {
    char lname_new[10];
    printf("Enter the (New) last name: ");
    scanf("%9s", lname_new);
    flush_input_buffer();
    strcpy(ptr->lname, lname_new);
}

void change_age(struct Student* ptr) {
    int age;
    printf("Enter the (New) age: ");
    scanf("%d", &age);
    flush_input_buffer();
    ptr->age = age;
}

void change_grade(struct Student* ptr) {
    float grade;
    printf("Enter the (New) grade: ");
    scanf("%f", &grade);
    flush_input_buffer();
    ptr->grade = grade;
}

// Main program starts here
int main(void) {
    // Intro ASCII art
    printf("                 ----|||||||||||||----\n");
    printf("                |  Welcome To SCHOOL  |\n");
    printf("                 ---------------------\n");
    printf("     ________________|___________|________________\n");
    printf("    |   _     _     ___     ___     _     _     _ |\n");
    printf("    |  | |   | |   |   |   |   |   | |   | |   | | |\n");
    printf("    |  |_|   |_|   |___|   |___|   |_|   |_|   |_| |\n");
    printf("    |                                             |\n");
    printf("    |   ___     ___     ___     ___     ___      |\n");
    printf("    |  |   |   |   |   |   |   |   |   |   |      |\n");
    printf("    |  |___|   |___|   |___|   |___|   |___|      |\n");
    printf("    |_____________________________________________|\n");
    printf("         ||                             ||\n");
    printf("         ||                             ||\n");
    printf("       =====                           =====\n");

    // Get number of students
    int x;
    printf("Enter total number of students in the class >> ");
    scanf("%d", &x);
    flush_input_buffer();

    // Initialize student array and counter
    struct Student students[x];
    struct Student s;
    int c = 0;

    // Loop to enter each student's data
    while (c < x) {
        printf("\nHello and welcome to school STD system:\n");
        s = create_student();
        students[c] = s;
        c++;
    }

    printf("\nThanks for using our program\nNumber of students entered = %d\n", c);

    // Ask user if they want to display all student info
    int z;
    printf("Do you want to see all students' info in the class?\n(1) for yes (0) for no >> ");
    scanf("%d", &z);
    flush_input_buffer();

    // Display all student records
    if (z == 1) {
        for (int i = 0; i < c; i++) {
            printf("\nInformation for Student No.%d\n", i + 1);
            display_student_info(students[i]);
        }
    } else {
        printf("Ok, no more student info displayed. All are registered in the school system.\n");
    }

    // Offer to change existing student records
    char ch;
    printf("Do you want to change any information Y or N: ");
    scanf(" %c", &ch);
    flush_input_buffer();

    while (ch == 'Y' || ch == 'y') {
        int id;
        printf("Enter student number (1 to %d): ", c);
        scanf("%d", &id);
        flush_input_buffer();

        if (id < 1 || id > c) {
            printf("Invalid student number!\n");
            return 1;
        }

        struct Student* ptr = &students[id - 1];

        char v;
        printf("What do you want to change?\n");
        printf("First name => f, Last name => l, Age => a, Grade => g: ");
        scanf(" %c", &v);
        flush_input_buffer();

        switch (v) {
            case 'f':
            case 'F':
                change_fname(ptr);
                break;
            case 'l':
            case 'L':
                change_lname(ptr);
                break;
            case 'a':
            case 'A':
                change_age(ptr);
                break;
            case 'g':
            case 'G':
                change_grade(ptr);
                break;
            default:
                printf("Invalid option!\n");
                break;
        }

        // Show updated info
        printf("\nUpdated Student Info:\n");
        display_student_info(*ptr);

        // Ask if the user wants to continue updating
        printf("Do you still want to change any information Y or N: ");
        scanf(" %c", &ch);
        flush_input_buffer();
    }

    // Final ASCII "BYE" message
    printf("Ok, happy for you to work with our SIS (Student Information System)\n");
    printf("###################################################################\n");
    printf("#                                                                 #\n");
    printf("#    ____   __     __ ______ ______                               #\n");
    printf("#   |  _ \\  \\ \\   / /|  ____|  ____|                              #\n");
    printf("#   | |_) |  \\ \\_/ / | |__  | |__                                 #\n");
    printf("#   |  _ <    \\   /  |  __| |  __|                                #\n");
    printf("#   | |_) |    | |   | |____| |____                               #\n");
    printf("#   |____/     |_|   |______|______|                              #\n");
    printf("#                                                                 #\n");
    printf("#                           BYE                                   #\n");
    printf("#                                                                 #\n");
    printf("###################################################################\n");
    printf("###################################################################\n");
    printf("###################################################################\n");
    return 0;
}
