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
### b determinant elements
```
#include <stdio.h>
int determinant(int mat[10][10], int n);
int main() {
  int arr[10][10];
  int i,j,n,d;
  printf("Enter size of the matrix\n");
  scanf("%d",&n);
  printf("Enter elements of array\n");
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          scanf("%d",&arr[i][j]);
      }
  }
  printf("Original matrix \n");
  for(i=0;i<n;i++){
      for(j=0;j<n;j++){
          printf("%d ",arr[i][j]);
      }
      printf("\n");
  }
    d=determinant(arr,n);
    printf("\ndeterminant is %d ",d);
    return 0;
}

int determinant(int mat[10][10], int n) { 
    if (n == 2) { 
        return (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]); 
    }  
else if (n == 3) { 
        return mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) 
             - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) 
             + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]); 
    }  
else { 
        printf("Determinant calculation for matrices larger than 3x3 is not implemented.\n"); 
        return 0; 
    } 
} 

```
### c Print boundry elements
```
#include <stdio.h>
void boundry(int n,int arr[10][10]);

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
  boundry(n,arr);
    return 0;
}
void boundry(int n,int arr[10][10]){
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
