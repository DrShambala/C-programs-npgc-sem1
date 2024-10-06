# Programme 14

### Write a program in C to accept a string in lower case and change the first letter of every word to upper case. Display the new string.

```
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    
int x,i = 0;

    printf("Enter a string in lowercase: ");
    gets(str);
    if (islower(str[0])) {
        x=str[0];
        x-=32;
        str[0]=x;
    }
    while (str[i] != '\0') {
        if (str[i] == ' ' && islower(str[i + 1])) {
            str[i + 1] = toupper(str[i + 1]);
        }
        i++;
    }

    printf("New string with uppercase first letters: %s\n", str);

    return 0;
}
```
