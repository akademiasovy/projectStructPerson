#include <stdio.h>
#include <conio.h>
#include <string.h>

struct person{
	int age;
	int salary;
	char firstname[20];
	char lastname[20];
};

main() {
	struct person osoba1;
//	osoba1.firstname = "Frank";  NOPE it doesnt WORK like THIS !
	strcpy (osoba1.firstname, "Frank");
	osoba1.age = 22;
	struct person osoby[16];
	struct person help;
	
	FILE *fr, *fw;
	fr = fopen("employees.dat","r");
	if(fr==NULL){
		printf("ERROR, file issue!");
		return 1;
	}
	fw = fopen("outputData.txt","w");
	if(fw==NULL){
		printf("ERROR, file issue!");
		return 1;
	}
	int i=0;
	int j, k;
	char c;
	while(fscanf(fr,"%d %d %s %s", &osoby[i].age, &osoby[i].salary, &osoby[i].firstname, &osoby[i].lastname) != EOF) {
		i++;
	}
	
	for(j=1; j<i; j++){
		for(k=0; k<=i-2; k++){
			if(osoby[k].salary < osoby[k+1].salary){
				help=osoby[k];
				osoby[k]=osoby[k+1];
				osoby[k+1]=help;
			}
		}
	}
	printf("\n***Sorted by Salary:\n");
	for(j=0; j<i; j++){
		printf("%d %d %s %s\n", osoby[j].age, osoby[j].salary, osoby[j].firstname, osoby[j].lastname);	
	}
	
	printf("\n***Sorted by Age:\n");
	for(j=1; j<i; j++){
		for(k=0; k<=i-2; k++){
			if(osoby[k].age < osoby[k+1].age){
				help=osoby[k];
				osoby[k]=osoby[k+1];
				osoby[k+1]=help;
			}
		}
	}
	for(j=0; j<i; j++){
		printf("%d %d %s %s\n", osoby[j].age, osoby[j].salary, osoby[j].firstname, osoby[j].lastname);	
	}
	
	int pos;
	printf("\n***Alphabetically firstame: \n");
	for(j=1; j<i; j++){
		for(k=0; k<=i-2; k++){
			pos=0;
			if(osoby[k].firstname[pos] > osoby[k+1].firstname[pos]){
				help=osoby[k];
				osoby[k]=osoby[k+1];
				osoby[k+1]=help;
			}
			while ((osoby[k].firstname[pos] == osoby[k+1].firstname[pos])){
				pos++;
				if(osoby[k].firstname[pos] > osoby[k+1].firstname[pos]){
					help=osoby[k];
					osoby[k]=osoby[k+1];
					osoby[k+1]=help;
				}
			}
		}
	}
	for(j=0; j<i; j++){
		printf("%d %d %s %s\n", osoby[j].age, osoby[j].salary, osoby[j].firstname, osoby[j].lastname);	
	}
	
	printf("\n***Alphabetically lastname: \n");
	for(j=1; j<i; j++){
		for(k=0; k<=i-2; k++){
			pos=0;
			if(osoby[k].lastname[pos] > osoby[k+1].lastname[pos]){
				help=osoby[k];
				osoby[k]=osoby[k+1];
				osoby[k+1]=help;
			}
			while ((osoby[k].lastname[pos] == osoby[k+1].lastname[pos])){
				pos++;
				if(osoby[k].lastname[pos] > osoby[k+1].lastname[pos]){
					help=osoby[k];
					osoby[k]=osoby[k+1];
					osoby[k+1]=help;
				}
			}
		}
	}
	for(j=0; j<i; j++){
		printf("%d %d %s %s\n", osoby[j].age, osoby[j].salary, osoby[j].firstname, osoby[j].lastname);	
	}
	fclose(fr);
	fclose(fw);
	return 0;
}
