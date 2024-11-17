# Programme 23
### a Transpose Matrix
```
#include <stdio.h>

void inputMatrix(int n, int matrix[n][n]);
void displayMatrix(int n, int matrix[n][n]);
void transp(int n, int matrix[n][n], int transpose[n][n]);

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

```

### b Print boundry elements
```
#include <stdio.h>
void boundry(int n,int arr[n][n]);

int main() {
  int arr[10][10];
  int i,j,n;
  printf("Enter size of the matrix\n");
  scanf("%d",&n);
  printf("Enter elements of array\n");
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          scanf("%d",&arr[i][j]);
      }
  }
  
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
         if(i==0||j==0||i==n-1||j==n-1){
             printf("%d ",arr[i][j]);
         }
         else{
             printf("  ");
         }
      }
      printf("\n");
  }
    return 0;
}
void boundry(int n,int arr[n][n]){
    int i,j;
     for(i=0;i<n;i++){
      for(j=0;j<n;j++){
         if(i==0||j==0||i==n-1||j==n-1){
             printf("%d ",arr[i][j]);
         }
         else{
             printf("  ");
         }
      }
      printf("\n");
  }
}
```
