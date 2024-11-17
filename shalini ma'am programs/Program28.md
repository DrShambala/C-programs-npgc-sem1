# Programme 28
### Write a C program to read the record of 10 employees in a file using structure and then display the records on the screen sorting the employee name in ascending order.
```
#include <stdio.h>
#include <string.h>

int main() {
    struct emp{
        char name[20];
        int id;
        float sal;
    } emp[10];
    int i,j,t;
    char temp[20];
    
    for(i=0;i<10;i++){
        printf("Id : ");
        scanf("%d",&emp[i].id);
         printf("Name : ");
         gets(emp[i].name);
         printf("Salary : ");
        scanf("%f",&emp[i].sal);
    }
     for(i=0;i<10;i++){
        for(j=0;j<10;j++){
            if(strcmp(emp[i].name,emp[j].name)>0){
                 t=emp[i].id;
                emp[i].id=emp[i].id;
                emp[i].id=t;
                  t=emp[i].sal;
                emp[i].sal=emp[i].sal;
                emp[i].sal=t;
                strcpy(temp,emp[i].name);
                strcpy(emp[i].name,emp[j].name);
                strcpy(emp[j].name,temp);
                
            }
        }
    }
    
    for(i=0;i<10;i++){
        printf("Id : %d\n",emp[i].id);
         printf("Name : ");
         puts(emp[i].name);
         printf("Salary : %f\n",emp[i].sal);
    }
    return 0;
}
```
