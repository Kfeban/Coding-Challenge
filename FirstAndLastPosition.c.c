#include <stdio.h>

int* searchRange(int* numbers, int numbersSize, int target, int* returnSize) {
    int start = -1;
    int end = -1;

    // Binary search for the starting position
    int left = 0;
    int right = numbersSize - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (numbers[mid] == target) {
            start = mid;
            right = mid - 1;
        } else if (numbers[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    // Binary search for the ending position
    left = 0;
    right = numbersSize - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (numbers[mid] == target) {
            end = mid;
            left = mid + 1;
        } else if (numbers[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    // Set the return size and allocate memory for the result
    *returnSize = 2;
    int* result = (int*)malloc(2 * sizeof(int));

    result[0] = start;
    result[1] = end;

    return result;
}

int main() {
    int numbers[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int numbersSize = sizeof(numbers) / sizeof(numbers[0]);
    int returnSize;

    int* result = searchRange(numbers, numbersSize, target, &returnSize);

    printf("[%d, %d]\n", result[0], result[1]);

    free(result);
    return 0;
}
