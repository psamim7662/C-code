#include <stdio.h>

int main() {
    int n, i, j;
    int sumd1 = 0, sumd2 = 0;
    int sumr, sumc;
    int isMagic = 1; // Flag to check if it is a magic square

    // Input the size of the matrix
    printf("Enter the size of the matrix (n for n x n):\n");
    scanf("%d", &n);

    if (n <= 0 || n > 10) {
        printf("Invalid matrix size. Please enter a size between 1 and 10.\n");
        return 1;
    }

    int magicSquare[10][10]; // Matrix size up to 10x10

    // Input matrix elements
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &magicSquare[i][j]);
        }
    }

    // Calculate the sum of the main diagonal
    for (i = 0; i < n; i++) {
        sumd1 += magicSquare[i][i];
    }

    // Calculate the sum of the secondary diagonal
    for (i = 0; i < n; i++) {
        sumd2 += magicSquare[i][n - 1 - i];
    }

    if (sumd1 != sumd2) {
        isMagic = 0;
    }

    // Check sum of rows and columns
    for (i = 0; i < n; i++) {
        sumr = 0;
        sumc = 0;
        for (j = 0; j < n; j++) {
            sumr += magicSquare[i][j]; // Sum of row
            sumc += magicSquare[j][i]; // Sum of column
        }
        if (sumr != sumd1 || sumc != sumd1) {
            isMagic = 0;
            break;
        }
    }

    if (isMagic) {
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }

    return 0;
}
