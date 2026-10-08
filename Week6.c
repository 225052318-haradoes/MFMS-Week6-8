#include <stdio.h>
#include <string.h>

int main() {

    /* ==========================================
       A. EMPLOYEE SALARIES
       ========================================== */

    float salaries[50];
    float salarySum = 0;
    float salaryAverage;
    float highestSalary, lowestSalary;
    float searchSalary;
    int salaryFound = 0;

    printf("====================================\n");
    printf("   MUNICIPAL INFORMATION SYSTEM\n");
    printf("====================================\n\n");

    printf("A. EMPLOYEE SALARIES\n\n");

    /* Capture 50 salaries */
    for (int i = 0; i < 50; i++) {
        printf("Enter salary %d: N$", i + 1);
        scanf("%f", &salaries[i]);
    }

    /* Display all salaries */
    printf("\n--- All Employee Salaries ---\n");

    for (int i = 0; i < 50; i++) {
        printf("Employee %d: N$%.2f\n", i + 1, salaries[i]);
    }

    /* Calculate total salary */
    for (int i = 0; i < 50; i++) {
        salarySum += salaries[i];
    }

    /* Calculate average */
    salaryAverage = salarySum / 50;

    /* Find highest and lowest salary */
    highestSalary = salaries[0];
    lowestSalary = salaries[0];

    for (int i = 1; i < 50; i++) {

        if (salaries[i] > highestSalary) {
            highestSalary = salaries[i];
        }

        if (salaries[i] < lowestSalary) {
            lowestSalary = salaries[i];
        }
    }

    printf("\nAverage Salary: N$%.2f\n", salaryAverage);
    printf("Highest Salary: N$%.2f\n", highestSalary);
    printf("Lowest Salary: N$%.2f\n", lowestSalary);

    /* Search for a salary */
    printf("\nEnter a salary to search for: N$");
    scanf("%f", &searchSalary);

    for (int i = 0; i < 50; i++) {

        if (salaries[i] == searchSalary) {
            printf("Salary found at Employee %d.\n", i + 1);
            salaryFound = 1;
        }
    }

    if (salaryFound == 0) {
        printf("Salary not found.\n");
    }


    /* ==========================================
       B. DEPARTMENT BUDGETS
       ========================================== */

    float budgets[10];
    float totalBudget = 0;
    float averageBudget;
    float temp;

    printf("\n\n====================================\n");
    printf("B. DEPARTMENT BUDGETS\n");
    printf("====================================\n\n");

    /* Capture 10 department budgets */
    for (int i = 0; i < 10; i++) {
        printf("Enter budget for Department %d: N$", i + 1);
        scanf("%f", &budgets[i]);
    }

    /* Display budgets */
    printf("\n--- Department Budgets ---\n");

    for (int i = 0; i < 10; i++) {
        printf("Department %d: N$%.2f\n", i + 1, budgets[i]);
    }

    /* Calculate total */
    for (int i = 0; i < 10; i++) {
        totalBudget += budgets[i];
    }

    /* Calculate average */
    averageBudget = totalBudget / 10;

    printf("\nTotal Budget: N$%.2f\n", totalBudget);
    printf("Average Budget: N$%.2f\n", averageBudget);


    /* Sort budgets from lowest to highest */
    for (int i = 0; i < 10 - 1; i++) {

        for (int j = i + 1; j < 10; j++) {

            if (budgets[i] > budgets[j]) {

                temp = budgets[i];
                budgets[i] = budgets[j];
                budgets[j] = temp;
            }
        }
    }

    /* Display sorted budgets */
    printf("\n--- Budgets Sorted Lowest to Highest ---\n");

    for (int i = 0; i < 10; i++) {
        printf("N$%.2f\n", budgets[i]);
    }


    /* ==========================================
       C. VEHICLE REGISTRATIONS
       ========================================== */

    char registrations[20][20];
    char searchRegistration[20];
    int registrationFound = 0;

    printf("\n\n====================================\n");
    printf("C. VEHICLE REGISTRATION NUMBERS\n");
    printf("====================================\n\n");

    /* Capture 20 registration numbers */
    for (int i = 0; i < 20; i++) {

        printf("Enter registration number %d: ", i + 1);
        scanf("%19s", registrations[i]);
    }

    /* Display registrations */
    printf("\n--- Vehicle Registration Numbers ---\n");

    for (int i = 0; i < 20; i++) {

        printf("Vehicle %d: %s\n", i + 1, registrations[i]);
    }

    /* Search registration */
    printf("\nEnter registration number to search: ");
    scanf("%19s", searchRegistration);

    for (int i = 0; i < 20; i++) {

        if (strcmp(registrations[i], searchRegistration) == 0) {

            printf("Registration number found at Vehicle %d.\n", i + 1);
            registrationFound = 1;
        }
    }

    if (registrationFound == 0) {
        printf("Registration number not found.\n");
    }


    /* ==========================================
       PROGRAM COMPLETE
       ========================================== */

    printf("\n====================================\n");
    printf("        PROGRAM COMPLETED\n");
    printf("====================================\n");

    return 0;
}