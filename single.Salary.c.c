#include <stdio.h>

#define MAX_SIZE 30001

int findSingleSalary(int salaries[], int length) {
    int frequency[MAX_SIZE] = {0};


    for (int i = 0; i < length; i++) {
        frequency[salaries[i]]++;
    }


    for (int i = 0; i < MAX_SIZE; i++) {
        if (frequency[i] == 1) {
            return i;
        }
    }


    return -1;
}

int main() {
    int salaries1[] = {25000, 25000, 19000};
    int length1 = sizeof(salaries1) / sizeof(salaries1[0]);
    printf("%d\n", findSingleSalary(salaries1, length1));

    int salaries2[] = {400000, 110000, 400000, 110000, 2000000};
    int length2 = sizeof(salaries2) / sizeof(salaries2[0]);
    printf("%d\n", findSingleSalary(salaries2, length2));

    int salaries3[] = {5000};
    int length3 = sizeof(salaries3) / sizeof(salaries3[0]);
    printf("%d\n", findSingleSalary(salaries3, length3));

    return 0;
}
