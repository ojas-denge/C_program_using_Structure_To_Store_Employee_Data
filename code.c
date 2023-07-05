#include <stdio.h> 
#include <string.h> 

#define MAX_EMPLOYEES 
100 struct Employee { 
char name[50]; 
float salary; 
}

int main() { 
  struct Employee employees[MAX_EMPLOYEES]; 
  int num_employees, i; 
  float total_salary = 0, 
  highest_salary = 0; 
  char manager_name[50]; 
  printf("Enter the number of employees: "); 
  scanf("%d", &num_employees); 
  for (i = 0; i < num_employees; i++) { 
    printf("Enter the name of employee %d: ", i+1); 
    scanf("%s", employees[i].name);
    printf("Enter the salary of employee %d: ", i+1); 
    scanf("%f", &employees[i].salary); total_salary += employees[i].salary; 
    if (employees[i].salary > highest_salary) { highest_salary = employees[i].salary; 
    strcpy(manager_name, employees[i].name); 
    } 
  } 
  printf("\nThe manager with the highest salary is %s\n", manager_name); 
  printf("The total expenditure on employee salaries is %.2f\n", total_salary); 
return 0; 
}
