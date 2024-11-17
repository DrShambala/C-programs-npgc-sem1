# Programme 29
### Write a C program to copy contents of one file to another file

```
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    int i = 0;
    int alphabets = 0, digits = 0, vowels = 0, consonants = 0, spaces = 0, specialChars = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (isalpha(str[i])) {
            alphabets++;
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        } else if (isdigit(str[i])) {
            digits++;
        } else if (isspace(str[i])) {
            spaces++;
        } else {
            specialChars++;
        }
        i++;
    }

    printf("Number of alphabets: %d\n", alphabets);
    printf("Number of digits: %d\n", digits);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
    printf("Number of spaces: %d\n", spaces);
    printf("Number of special characters: %d\n", specialChars);

    return 0;
}
```
