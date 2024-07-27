# School Billing System

This project is a simple C program for managing student and staff records in a school. It allows you to add student and staff records, search for student fee details, and display staff salary information.

## Features

- **Add Student Record**: Add a new student record with their name, roll number, and fee details.
- **Search Student by Roll Number**: Search for a student by their roll number to find their fee details and calculate due fees.
- **Add Staff Record**: Add a new staff record with their name, ID, and salary details.
- **Display Staff Data**: Display staff details along with their salary information.

## Getting Started

### Prerequisites

- C compiler
- Make sure you have a terminal or command prompt to compile and run the program.

### Compiling the Program

To compile the program, open your terminal or command prompt and navigate to the directory containing the source code files. Then, run the following command:

```sh
gcc -o school_billing_system school_billing_system.c
```

### Running the Program

After compiling the program, you can run it using the following command:

```sh
./school_billing_system
```

## Usage

When you run the program, you will be presented with a menu of options:

```
****School Billing System****
********************************************
1. Add Student Record
2. Search Student by Roll Number to find fee details
3. Add staff data
4. Display staff data along with salary
5. Exit
********************************************
Enter your choice:
```

- **Add Student Record**: Follow the prompts to enter the student's name, roll number, and fee details.
- **Search Student by Roll Number**: Enter the roll number of the student you want to search for. The program will display the student's details along with the due fees.
- **Add Staff Data**: Follow the prompts to enter the staff's name, ID, and salary details.
- **Display Staff Data**: Enter the ID of the staff member you want to search for. The program will display the staff member's details along with their current salary.
- **Exit**: Exit the program.

## File Structure

- `school_billing_system.c`: The main source code file containing the implementation of the program.
- `student_data.txt`: A text file used to store student records.
- `staff_data.txt`: A text file used to store staff records.

