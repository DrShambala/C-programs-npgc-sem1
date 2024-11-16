# Programme 23
### a Transpose Matrix
```
#include <stdio.h>

void transpose(int *, int);

int main() {
    int arr[10][10];
    int i, j, n;

    printf("Enter size of matrix\n");
    scanf("%d", &n);

    printf("Enter elements of array\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Original matrix\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    transpose(&arr[0][0], n);

    return 0;
}

void transpose(int *p, int n) {
    int a[10][10];
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            a[j][i] = *(p + i * n + j);
        }
    }

    printf("Transposed matrix\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
```

### b Print boundry elements
