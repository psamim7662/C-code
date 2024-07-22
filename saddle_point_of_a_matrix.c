#include<stdio.h>

int main() {
    int a[10][10], i, j, k, min, max, n, f;

    printf("Enter number of rows and columns (n): ");
    scanf("%d", &n);

    // Input matrix elements
    printf("Enter the matrix elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("Enter the value of matrix[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Print the matrix
    printf("The matrix is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Find saddle points
    f = 0; // Flag to check if saddle point is found
    for (i = 0; i < n; i++) {
        min = a[i][0]; // Initialize min with first element of the row
        int col_index = 0;
        // Find the minimum element in current row and its column index
        for (j = 1; j < n; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
                col_index = j;
            }
        }

        // Check if min is also the maximum in its column
        max = a[0][col_index]; // Initialize max with first element of the column
        for (k = 1; k < n; k++) {
            if (a[k][col_index] > max) {
                max = a[k][col_index];
            }
        }

        // If min is equal to max, it's a saddle point
        if (min == max) {
            printf("Saddle point found at (%d, %d): %d\n", i, col_index, max);
            f = 1; // Set flag to indicate saddle point found
        }
    }

    if (f == 0) {
        printf("No saddle point found.\n");
    }

    return 0;
}
