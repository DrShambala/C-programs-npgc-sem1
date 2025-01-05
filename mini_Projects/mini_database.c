// Student Record management system
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void filesearch();
void createrecord();
int main() {
    char list[10],operation[20];
    puts("type list to get command list");
    gets(list);
    
    if(strcmp(list,"list")==0){
        puts("creterec\t to input a new data\nsearch\t to search in exiting database");
        gets(operation);
        if (strcmp(operation,"createrec")==0)
        {
            createrecord();
        }
        else if (strcmp(operation,"search")==0)
        {
            filesearch();
        }
        else{
            printf("%s command not found",operation);
        }
        
    }
    return 0;
}

void createrecord(){
    FILE *file;
    char rllnum[8],name[50],course[20];

    file = fopen("test2.txt", "a");
    puts("Roll number: ");
    gets(rllnum);
    fprintf(file, "roll number: %s\n", rllnum);
    puts("Name: ");
    gets(name);
    fprintf(file, "Name: %s\n", name);
    puts("Course: ");
    gets(course);
    fprintf(file, "Course: %s\n\n", course);
    fclose(file);
}
void filesearch(){
    FILE *file;
    int printNext=0;
    char rollnum[8] ,line[100];
    printf("Enter the Roll number: ");
    scanf("%s", rollnum);

    file = fopen("test2.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        exit(0);
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        if (printNext==1) {
            printf("%s", line);
            printNext = 0;
        }
        if (printNext==2) {
            printf("%s", line);
            printNext = 1;
        }
        
        if (strstr(line, rollnum) != NULL) {
            printf("%s", line);  
            printNext = 2;  
        }
    }

    fclose(file);
}
