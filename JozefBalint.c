#include <stdio.h>
#include <string.h>

struct person{
    int age;
    int salary;
    char firstName[20];
    char lastName[20];
};


int main(){
    //struktura = heterogenny datovy typ (objekt)
    struct person osoba1;
    //osoba1.firstname = "Frank" NOOOOOOOOOOOOOOOOOOO
    strcpy(osoba1.firstName,"Frank");
    osoba1.age = 22;


    struct person osoby[20];
    struct person swap;
    int j,k;
    FILE *fr;

    fr = fopen("employeers.dat","r");

    if(fr == NULL){
        printf("Read file error!");
        return 1;
    }
    int i = 0;

    while(fscanf(fr,"%d%d%s%s",&osoby[i].age,&osoby[i].salary,&osoby[i].firstName,&osoby[i].lastName) != EOF){
        i++;
    }

    int n = i; //do i sa ulozi pocet osob.

    for (i = 0 ; i < ( n - 1 ); i++){
        for (j = 0 ; j < n - i - 1; j++){
            if (osoby[j].salary > osoby[j+1].salary)
            {
                swap       = osoby[j];
                osoby[j]   = osoby[j+1];
                osoby[j+1] = swap;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d %d %s %s \n",osoby[i].age,osoby[i].salary,osoby[i].firstName,osoby[i].lastName);
    }
    printf("\n");

    for (i = 0 ; i < ( n - 1 ); i++){
        for (j = 0 ; j < n - i - 1; j++){
            if (osoby[j].age > osoby[j+1].age)
            {
                swap       = osoby[j];
                osoby[j]   = osoby[j+1];
                osoby[j+1] = swap;
            }
        }
    }

    for(i = 0; i < n; i++){
        printf("%d %d %s %s \n",osoby[i].age,osoby[i].salary,osoby[i].firstName,osoby[i].lastName);
    }
    printf("\n");

    for (i = 0 ; i < ( n - 1 ); i++){
        for (j = 0 ; j < n - i - 1; j++){

                if (strcmp(osoby[j].lastName, osoby[j+1].lastName) > 0)
                {
                    swap       = osoby[j];
                    osoby[j]   = osoby[j+1];
                    osoby[j+1] = swap;
                }
            }

        }


    for(i = 0; i < n; i++){
        printf("%d %d %s %s \n",osoby[i].age,osoby[i].salary,osoby[i].firstName,osoby[i].lastName);
    }

    fclose(fr);

    return 0;
}
