#include <stdio.h>
#include <string.h>

struct person{
   int age;
   int salary;
   char firstname[20];
   char lastname[20];
};

int main() 
{
    struct person osoba1;
    //osoba1.firstname = "Frank";  NOOOOOOOOOOOO
    strcpy(osoba1.firstname,"Frank");
    osoba1.age=22;
    
    struct person osoby[10];
    FILE *fr;
    fr=fopen("employees.dat","r");
    if(fr==NULL){
       printf("Error. File issue!");
       return 1;
	}
	int i=0;
	while ( fscanf(fr,"%d%d%s%s",&osoby[i].age, &osoby[i].salary,
	          & osoby[i].firstname, &osoby[i].lastname) != EOF)
	{ 
	   i++;
	}

    int j,k;
    for(j=0;j<i-1;j++){
       for(k=0;k<i-1;k++){
           if(osoby[k].salary>osoby[k+1].salary){
               struct person temp = osoby[k];
               osoby[k]=osoby[k+1];
               osoby[k+1]=temp;
		   }
	   }
	}   
	
	printf("\nList of employees sorted by salary: ");
	for(j=0;j<i;j++)
	    printf("\nAge: %d Salary: %d  %s %s",osoby[j].age,
		osoby[j].salary, osoby[j].firstname, osoby[j].lastname); 
	
    fclose(fr);
    return 0;
}


