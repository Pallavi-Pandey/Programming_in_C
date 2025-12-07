#include<stdio.h>
#include<stdlib.h>

struct Employee {
    char name[50];
    int salary;
    struct Employee *next;
};

void employeeList()
{
    struct Employee *head = NULL, *temp = NULL, *newNode = NULL;
    int choice;
    char empName[50];
    int empSalary;
    int i;

    while (1) {
        // Read employee name and salary
        if (scanf("%s %d", empName, &empSalary) != 2)
            return;

        // Allocate new node
        newNode = (struct Employee *)malloc(sizeof(struct Employee));
        if (newNode == NULL)
            return;

        // Manual string copy (no strcpy)
        for (i = 0; empName[i] != '\0'; i++)
            newNode->name[i] = empName[i];
        newNode->name[i] = '\0';

        newNode->salary = empSalary;
        newNode->next = NULL;

        // Add to list
        if (head == NULL)
            head = newNode;
        else
            temp->next = newNode;

        temp = newNode;

        // Read continuation choice
        if (scanf("%d", &choice) != 1)
            break;
        if (choice == 0)
            break;
    }

    if (head == NULL)
        return;

    // Find maximum salary
    int maxSalary = head->salary;
    temp = head;
    while (temp != NULL) {
        if (temp->salary > maxSalary)
            maxSalary = temp->salary;
        temp = temp->next;
    }

    // Print employees with maximum salary
    temp = head;
    while (temp != NULL) {
        if (temp->salary == maxSalary)
            printf("%s\n", temp->name);
        temp = temp->next;
    }

    // Free memory
    temp = head;
    while (temp != NULL) {
        struct Employee *toFree = temp;
        temp = temp->next;
        free(toFree);
    }
}

int main()
{
    employeeList();
}

/*
TEST CASES

Test Case 1:
Input:
employee1 20000
1
employee2 15000
1
employee3 20000
1
employee4 20000
1
employee5 18000
0

Output:
employee1
employee3
employee4

Test Case 2:
Input:
employee1 20000
1
employee2 20000
1
employee3 20000
1
employee4 20000
1
employee5 20000
0

Output:
employee1
employee2
employee3
employee4
employee5

Test Case 3:
Input:
employee1 20000
0

Output:
employee1

Test Case 4:
Input:
employee1 20000
1
employee2 30000
1
employee3 40000
1
employee4 50000
1
employee5 25000
0

Output:
employee4
*/
