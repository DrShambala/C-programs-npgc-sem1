# Programme 25
### Write a C Program to Print the First Letter of Each Word

```
#include <stdio.h>

int main() {
    
    char str[40];
    gets(str);

printf("%c ",str[0]);
for(int i=0;i<40;i++){
  
  if( str[i]==' '){
    printf("%c ",str[i+1]);
  }
}
    return 0;
}
```
