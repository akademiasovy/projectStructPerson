//otvorime subor z ktoreho nacitame uzivatelov, kolko ma rokov, aky ma mesacny prijem, meno, priezvisko, usporiada od najbohatsieho po najchudobnejsieho, potom podla veku
//potrebujeme vytvorit strukturu(heterogenny datovy typ)
#include<stdio.h>
#include<string.h>

struct person{
	int age;
	int salary;
	char firstname[20];
	char lastname[20];
};

main(){
	struct person osoby[15];
	FILE *fr;
	fr=fopen("employees.dat","r");
	if(fr==NULL){
		printf("File not exist or not have permission");
		return 1;
	}
	int i=0;
	while(fscanf(fr,"%d%d%s%s",&osoby[i].age,&osoby[i].salary,&osoby[i].firstname,&osoby[i].lastname)!=EOF){
		i++;
	}
	
	int swapAge, swapSalary,c,d;
	char swapFirstname [20],swapLastname[20];
	
	printf("Age\n");
	 for (c=0;c<(15-1);c++)
  {
    for (d=0;d<15-c-1;d++)
    {
      if (osoby[d].age > osoby[d+1].age)
      {
        swapAge=osoby[d].age;
        osoby[d].age=osoby[d+1].age;
        osoby[d+1].age=swapAge;
        
        swapSalary=osoby[d].salary;
        osoby[d].salary=osoby[d+1].salary;
        osoby[d+1].salary=swapSalary;
        
        strcpy(swapFirstname,osoby[d].firstname);
        strcpy(osoby[d].firstname,osoby[d+1].firstname);
        strcpy(osoby[d+1].firstname,swapFirstname);
        
        strcpy(swapLastname,osoby[d].lastname);
        strcpy(osoby[d].lastname,osoby[d+1].lastname);
        strcpy(osoby[d+1].lastname,swapLastname);
        
      }
    }
  }  
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
  printf("\nEarnings");
  
  	 for (c=0;c<(15-1);c++)
  {
    for (d=0;d<15-c-1;d++)
    {
      if (osoby[d].salary > osoby[d+1].salary)
      {
        swapAge=osoby[d].age;
        osoby[d].age=osoby[d+1].age;
        osoby[d+1].age=swapAge;
        
        swapSalary=osoby[d].salary;
        osoby[d].salary=osoby[d+1].salary;
        osoby[d+1].salary=swapSalary;
        
        strcpy(swapFirstname, osoby[d].firstname);
        strcpy(osoby[d].firstname, osoby[d+1].firstname);
        strcpy(osoby[d+1].firstname  ,swapFirstname);
        
        strcpy(swapLastname,osoby[d].lastname);
        strcpy(osoby[d].lastname,osoby[d+1].lastname);
        strcpy(osoby[d+1].lastname,swapLastname);
        
      }
    }
  }
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
   printf("\nfirst letter lastname");
  
  	 for (c=0;c<(15-1);c++)
  {
    for (d=0;d<15-c-1;d++)
    {
      if (strcmp(osoby[d].lastname, osoby[d+1].lastname)>0)
      {
        swapAge=osoby[d].age;
        osoby[d].age=osoby[d+1].age;
        osoby[d+1].age=swapAge;
        
        swapSalary=osoby[d].salary;
        osoby[d].salary=osoby[d+1].salary;
        osoby[d+1].salary=swapSalary;
        
        strcpy(swapFirstname, osoby[d].firstname);
        strcpy(osoby[d].firstname, osoby[d+1].firstname);
        strcpy(osoby[d+1].firstname  ,swapFirstname);
        
        strcpy(swapLastname,osoby[d].lastname);
        strcpy(osoby[d].lastname,osoby[d+1].lastname);
        strcpy(osoby[d+1].lastname,swapLastname);
        
      }
    }
  }
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
	fclose(fr);
	return 0;
}
