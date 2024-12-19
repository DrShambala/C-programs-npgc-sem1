# File encryption and decryption

```
#include <stdio.h>
void encrypt(int key);
void decrypt(int key);
int main()
{
    int key = 11;
    char ch;
    printf("What to do encrypt or decrypt\na or b\n");
    scanf(" %c",&ch);
    if (ch =='a')
    {
    encrypt(key);
    }
    else{
    decrypt(key);
    }
    return 0;
}

void encrypt(int key)
{
    FILE *file, *fp;
    file = fopen("test.txt", "r");
    fp = fopen("test2.txt", "w");
    
    int ch = getc(file), x;


    while (ch != EOF)
    {
        x = ch + key;
        fputc(x, fp);
        ch = getc(file);
    }
printf("File encrypt successpully");

    fclose(file);
}

void decrypt(int key)
{
    FILE *file, *fp;
    file = fopen("test2.txt", "r");
    fp = fopen("test.txt", "w");
    
    int ch = getc(file), x;


    while (ch != EOF)
    {
        x = ch - key;
        fputc(x, fp);
        ch = getc(file);
    }
printf("File decrypt successpully");
    fclose(file);
}
```
