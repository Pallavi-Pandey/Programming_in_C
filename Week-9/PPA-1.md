# Create Employee List Using Dynamic Memory Allocation

Complete the function `employeeList` that dynamically allocates memory to store an employee's record and creates a list of employees. You are given an `Employee` structure that has three attributes `name` as a string to store the name of the employee, `salary` as an integer to store the salary of the employee, and `next` as a pointer to the same `Employee` structure to store the address of the next employee information in the list, if no next employee exists after that, it stores `NULL`.

Function read the input in the following format:

1. Read the employee's name and salary separated by space and add structure to the list's end.
2. Read choice as integer (if the input is 1, go to step 1 again to read the next employee data and if the input is 0, stop and print all employee names that have a maximum salary (each in a new line).

**Note:** If more than one employee has a maximum salary, then print all employee's names in the same order as they are inserted into the list.

### Sample Input
```text
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
```

### Output
```text
employee1
employee3
employee4
```
