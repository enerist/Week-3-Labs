#include <stdio.h>

int main() {
    float basic_salary, housing_allowance, transport_allowance, tax;
    float gross_salary, net_salary;

    
    printf("Enter Basic Salary: ");
    scanf("%f", &basic_salary);

    printf("Enter Housing Allowance: ");
    scanf("%f", &housing_allowance);

    printf("Enter Transport Allowance: ");
    scanf("%f", &transport_allowance);

    printf("Enter Tax: ");
    scanf("%f", &tax);

    
    gross_salary = basic_salary + housing_allowance + transport_allowance;
    net_salary = gross_salary - tax;


    printf("\n--- Salary Slip ---\n");
    printf("Gross Salary: %.2f\n", gross_salary);
    printf("Net Salary: %.2f\n", net_salary);

    return 0;
}