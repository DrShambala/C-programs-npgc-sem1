# Program 29
### Write a C Program to read a string and to find the number of alphabets,digits, vowels, consonants, spaces and special characters.

```
#include <stdio.h>
void charCount(char str[20],int *alpha,int *vow,int *con,int *space,int *sChar);

int main() {
    char str[20];
    int i,alpha,vow,con,space,sChar;
    alpha=vow=con=space=sChar=0;
    puts("Enter a string");
    scanf("%s",str);
    // gets(str);
    
    charCount(str,&alpha,&vow,&con,&space,&sChar);
    
    printf("alphabets are %d\nvowels are %d\nconsonent are %d\nspaces are %d\nspecial Characters are %d",alpha,vow,con,space,sChar);
    return 0;
}
void charCount(char str[20],int *alpha,int *vow,int *con,int *space,int *sChar)
{
  int i=0;
  while(str[i] != '\0'){
    
    if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z')){
      (*alpha)++;
      if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
      str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
        (*vow)++;
      }
      else{
        (*con)++;
      }
      
    }
    else if(str[i]==' '){
      (*space)++;
    }
    else{
    (*sChar)++;
    }
    i++; 
  }
}
```
