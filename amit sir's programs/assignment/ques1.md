### Programe to print my Marksheet

```
#include <stdio.h>
#include <string.h>
#include <conio.h>

int main() {
    long int UID;
    char c[10],name[20];
    clrscr();
    printf("Enter Your Name\n");
    //scanf("%s",name);
    gets(name);
    printf("Enter your Unique ID\n");
    scanf("%ld",&UID);
    printf("Enter capcha\n--------\n|C72gaD|\n--------\n");
    scanf("%s",c);
    if(strcmp(c,"C72gaD")==0 && UID == 7469577){
    clrscr();
	printf("Name : ");
	puts(name);
	printf("UID : %ld\n",UID);
	printf("Subject\t\t\tMarks\nEnglish\t\t\t70\nHindi\t\t\t90\nPhysics\t\t\t55\nChemistry\t\t69\nBiology\t\t\t68\nComputer Science\t70");
    }
    getch();
    return 0;
}
```
