# Programme 23
### a Transpose Matrix
```
#include <stdio.h>

void inputMatrix(int n, int matrix[n][n]) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix(int n, int matrix[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void transp(int n, int matrix[n][n], int transpose[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int n;
    int matrix[10][10], transpose[10][10];
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    inputMatrix(n, matrix);
    transp(n, matrix, transpose);
    printf("\nOriginal Matrix:\n");
    displayMatrix(n, matrix);
    printf("\nTransposed Matrix:\n");
    displayMatrix(n, transpose);

    return 0;
}

```

### b Print boundry elements
