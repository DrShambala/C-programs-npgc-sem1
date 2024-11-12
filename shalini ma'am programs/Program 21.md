# Programme 21
### WAP in C to swap the two values using Call by Value and Call by reference

```
#include <stdio.h>

// Function to swap two values
void callRef(int *a, int *b);
void callVal(int a, int b);
int main() {
    int x,y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    printf("Enter the value of y : ");
    scanf("%d",&y);

    printf("Before swapping: x = %d, y = %d\n", x, y);

    callRef(&x, &y);
    callVal(x,y);
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
void callRef(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void callVal(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
```
