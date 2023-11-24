#include <stdio.h>

#define MAX_SIZE 30001 // Maximum possible salary value based on the given constraints

int findSingleSalary(int salaries[], int length) {
    int frequency[MAX_SIZE] = {0}; // Initialize frequency array with zeros

    // Count the occurrences of each salary
    for (int i = 0; i < length; i++) {
        frequency[salaries[i]]++;
    }

    // Find the salary with only one occurrence
    for (int i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] == 1) {
            return i;
        }
    }

    // If no single salary is found, return -1 or handle the case as per your requirement
    return -1;
}

int main() {
    int salaries1[] = {25000, 25000, 19000};
    int length1 = sizeof(salaries1) / sizeof(salaries1[0]);
    printf("%d\n", findSingleSalary(salaries1, length1));  // Output: 19000

    int salaries2[] = {400000, 110000, 400000, 110000, 2000000};
    int length2 = sizeof(salaries2) / sizeof(salaries2[0]);
    printf("%d\n", findSingleSalary(salaries2, length2));  // Output: 2000000

    int salaries3[] = {5000};
    int length3 = sizeof(salaries3) / sizeof(salaries3[0]);
    printf("%d\n", findSingleSalary(salaries3, length3));  // Output: 5000

    return 0;
}
