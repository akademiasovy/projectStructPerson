#include <stdio.h>
#include <string.h>
 
 struct person{
    int age;
     int salary;
     char firstName[20];
     char lastName[20];
 };
 
 int main(){
    
     struct person osoby[100];
     int i = 0, j, length, comp;
     struct person temp;
     FILE *fr;

     fr = fopen("employees.txt", "r");
     if ( fr == NULL ) return 1;
 
     while ( fscanf(fr ,"%d%d%s%s", &osoby[i].age, &osoby[i].salary, &osoby[i].firstName, &osoby[i].lastName) != EOF ){
         printf("%d %d %s %s\n", osoby[i].age, osoby[i].salary, osoby[i].firstName, osoby[i].lastName);
         i++;
     }
 
    length = i;
     for(i=1; i<length; i++){
         for(j=0; j<length-i; j++){
             if(osoby[j].salary < osoby[j+1].salary){
                temp = osoby[j];
                 osoby[j] = osoby[j+1];
                 osoby[j+1] = temp;
             }
         }
     }
 
     printf("\n\n\nzoradene podla platu:\n\n");
     for(i=0; i<length; i++){
         printf("%d %d %s %s\n", osoby[i].age, osoby[i].salary, osoby[i].firstName, osoby[i].lastName);
     }
 
     for(i=1; i<length; i++){
         for(j=0; j<length-i; j++){
             if(osoby[j].age < osoby[j+1].age){
                 temp = osoby[j];
                 osoby[j] = osoby[j+1];
                 osoby[j+1] = temp;
            }
      }
     printf("\n\n\nzoradenie podla veku:\n\n");
     for(i=0; i<length; i++){
        printf("%d %d %s %s\n", osoby[i].age, osoby[i].salary, osoby[i].firstName, osoby[i].lastName);
    }
 
     for(i=1; i<length; i++){
        for(j=0; j<length-i; j++){
             comp = strcmp(osoby[j].lastName, osoby[j+1].lastName);
             if(comp > 0){
                 temp = osoby[j];
                 osoby[j] = osoby[j+1];
                 osoby[j+1] = temp;
             }
         }
     }
     printf("\n\n\nzoradene podla priezviska:\n\n");
     for(i=0; i<length; i++){
         printf("%d %d %s %s\n", osoby[i].age, osoby[i].salary, osoby[i].firstName, osoby[i].lastName);
     }
 
     fclose(fr);
 
     return 0;
     
	 }
	 }
 
