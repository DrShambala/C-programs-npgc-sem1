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
    else if(strcmp(c,"C72gaD")==0 && UID == 7469576){
    clrscr();
	printf("Name : ");
	puts(name);
	printf("UID : %ld\n",UID);
	printf("Subject\t\t\tMarks\nEnglish\t\t\t73\nHindi\t\t\t70\nPhysics\t\t\t81\nChemistry\t\t83\nBiology\t\t\t73\nComputer Science\t52");
    }
    else if(strcmp(c,"C72gaD")==0 && UID == 7469578){
    clrscr();
	printf("Name : ");
	puts(name);
	printf("UID : %ld\n",UID);
	printf("Subject\t\t\tMarks\nEnglish\t\t\t53\nHindi\t\t\t60\nPhysics\t\t\t71\nChemistry\t\t77\nBiology\t\t\t83\nComputer Science\t72");
    }
    else if(strcmp(c,"C72gaD")==0 && UID == 7469575){
    clrscr();
	printf("Name : ");
	puts(name);
	printf("UID : %ld\n",UID);
	printf("Subject\t\t\tMarks\nEnglish\t\t\t53\nHindi\t\t\t60\nPhysics\t\t\t71\nChemistry\t\t77\nBiology\t\t\t83\nComputer Science\t72");
    }
	else{
	printf("Invalid Input");
	}
    getch();
    return 0;
}
```
