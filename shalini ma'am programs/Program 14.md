# Programme 14

### Write a program in C to accept a string in lower case and change the first letter of every word to upper case. Display the new string.

```
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    int i = 0;

    printf("Enter a string in lowercase: ");
    gets(str);

    // Convert the first letter of the string to uppercase if it's a lowercase letter
    if (islower(str[0])) {
        str[0] = toupper(str[0]);
    }

    // Loop through the string
    while (str[i] != '\0') {
        // Check for space and convert the next character to uppercase
        if (str[i] == ' ' && islower(str[i + 1])) {
            str[i + 1] = toupper(str[i + 1]);
        }
        i++;
    }

    printf("New string with uppercase first letters: %s\n", str);

    return 0;
}
```