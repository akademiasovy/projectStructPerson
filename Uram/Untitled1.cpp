#include<stdio.h>
#include<string.h>
//struktura 

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
	
	printf("VEK\n");
	//VEK
	 for (c = 0 ; c < ( 15 - 1 ); c++)
  {
    for (d = 0 ; d < 15 - c - 1; d++)
    {
      if (osoby[d].age > osoby[d+1].age)
      {
        swapAge       = osoby[d].age;
        osoby[d].age   = osoby[d+1].age;
        osoby[d+1].age = swapAge;
        
        swapSalary       = osoby[d].salary;
        osoby[d].salary   = osoby[d+1].salary;
        osoby[d+1].salary = swapSalary;
        
        strcpy(swapFirstname, osoby[d].firstname);
        strcpy(osoby[d].firstname, osoby[d+1].firstname);
        strcpy(osoby[d+1].firstname  ,swapFirstname);
        
        strcpy(swapLastname  ,osoby[d].lastname);
        strcpy(osoby[d].lastname   ,osoby[d+1].lastname);
        strcpy(osoby[d+1].lastname  ,swapLastname);
        
      }
    }
  }
  
  
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
  
  //VEK
  
  printf("\n\nZAROBKY\n");
  
  //ZAROBKY
  	 for (c = 0 ; c < ( 15 - 1 ); c++)
  {
    for (d = 0 ; d < 15 - c - 1; d++)
    {
      if (osoby[d].salary > osoby[d+1].salary)
      {
        swapAge       = osoby[d].age;
        osoby[d].age   = osoby[d+1].age;
        osoby[d+1].age = swapAge;
        
        swapSalary       = osoby[d].salary;
        osoby[d].salary   = osoby[d+1].salary;
        osoby[d+1].salary = swapSalary;
        
        strcpy(swapFirstname, osoby[d].firstname);
        strcpy(osoby[d].firstname, osoby[d+1].firstname);
        strcpy(osoby[d+1].firstname  ,swapFirstname);
        
        strcpy(swapLastname  ,osoby[d].lastname);
        strcpy(osoby[d].lastname   ,osoby[d+1].lastname);
        strcpy(osoby[d+1].lastname  ,swapLastname);
        
      }
    }
  }
  
  
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
  //ZAROBKY
  printf("\n\nprve pismeno meno\n");
  printf("%c",osoby[1].firstname[1]);
  //prve pismeno meno
  
  	 for (c = 0 ; c < ( 15 - 1 ); c++)
  {
    for (d = 0 ; d < 15 - c - 1; d++)
    {
      if (strcmp(osoby[d].firstname, osoby[d+1].firstname)>0)
      {
        swapAge       = osoby[d].age;
        osoby[d].age   = osoby[d+1].age;
        osoby[d+1].age = swapAge;
        
        swapSalary       = osoby[d].salary;
        osoby[d].salary   = osoby[d+1].salary;
        osoby[d+1].salary = swapSalary;
        
        strcpy(swapFirstname, osoby[d].firstname);
        strcpy(osoby[d].firstname, osoby[d+1].firstname);
        strcpy(osoby[d+1].firstname  ,swapFirstname);
        
        strcpy(swapLastname  ,osoby[d].lastname);
        strcpy(osoby[d].lastname   ,osoby[d+1].lastname);
        strcpy(osoby[d+1].lastname  ,swapLastname);
        
      }
    }
  }
  
  
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
  //prve pismeno meno
  
   printf("\n\nprve pismeno priezvisko\n");
  //prve pismeno priezvisko
  
  	 for (c = 0 ; c < ( 15 - 1 ); c++)
  {
    for (d = 0 ; d < 15 - c - 1; d++)
    {
      if (strcmp(osoby[d].lastname, osoby[d+1].lastname)>0)
      {
        swapAge       = osoby[d].age;
        osoby[d].age   = osoby[d+1].age;
        osoby[d+1].age = swapAge;
        
        swapSalary       = osoby[d].salary;
        osoby[d].salary   = osoby[d+1].salary;
        osoby[d+1].salary = swapSalary;
        
        strcpy(swapFirstname, osoby[d].firstname);
        strcpy(osoby[d].firstname, osoby[d+1].firstname);
        strcpy(osoby[d+1].firstname  ,swapFirstname);
        
        strcpy(swapLastname  ,osoby[d].lastname);
        strcpy(osoby[d].lastname   ,osoby[d+1].lastname);
        strcpy(osoby[d+1].lastname  ,swapLastname);
        
      }
    }
  }
  
  
  for(i=0;i<15;i++){
  	printf("%d %d %s %s",osoby[i].age,osoby[i].salary,osoby[i].firstname,osoby[i].lastname);
  	printf("\n");
  }
  //prve pismeno priezvisko
  
 
  
	fclose(fr);
	return 0;
}
