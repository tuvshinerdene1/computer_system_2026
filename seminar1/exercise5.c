#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    printf("Enter N and M: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];

    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int max_even = 0, max_odd = 0;
    bool found_even = false, found_odd = false;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int current = matrix[i][j];

            if (current % 2 == 0) {
                if (!found_even || current > max_even) {
                    max_even = current;
                    found_even = true;
                }
            } else {
                if (!found_odd || current > max_odd) {
                    max_odd = current;
                    found_odd = true;
                }
            }
        }
    }

    if (found_even) {
        printf("Greatest even number: %d\n", max_even);
    } else {
        printf("Greatest even number: None (No even numbers found)\n");
    }

    if (found_odd) {
        printf("Greatest odd number: %d\n", max_odd);
    } else {
        printf("Greatest odd number: None (No odd numbers found)\n");
    }

    return 0;
}