#include<stdio.h>
#include<string.h>

struct person{
	
	int age;
	int salary;
	char firstName[20];
	char secondName[20];
	
};

main(){
	/*
	struct person osoba1;
	
	strcpy(osoba1.firstName,"Frank");
	osoba1.age=22;
	*/
	
	struct person osoby[15];
	FILE *fr;
	
	
	fr=fopen("employees.dat","r");
	
	if(fr==NULL){
		printf("error\n");
		return 1;
	}
	
	int i=0;
	int m=0;
	while(fscanf(fr,"%d%d%s%s",&osoby[i].age, &osoby[i].salary, &osoby[i].firstName,&osoby[i].secondName) != EOF){
	
		i++;
		m++;
	}
	
//	printf("%d %s",osoby[9].age, osoby[9].firstName );
   
   int c,d;
	
	for (c = 0 ; c < ( i - 1 ); c++){
    for (d = 0 ; d < i - c - 1; d++)
    {
      if (osoby[d].salary > osoby[d+1].salary) 
      {
        struct person swap       = osoby[d];
        osoby[d]   = osoby[d+1];
        osoby[d+1] = swap;
      }
    }
  }
  
  for(int i=0;i<m;i++){

  printf("%s %s %d %d \n",osoby[i].firstName, osoby[i].secondName, osoby[i].age, osoby[i].salary  );
  }
  printf("\n");
  	for (c = 0 ; c < ( i - 1 ); c++){
    for (d = 0 ; d < i - c - 1; d++)
    {
      if (osoby[d].age > osoby[d+1].age) 
      {
        struct person swap       = osoby[d];
        osoby[d]   = osoby[d+1];
        osoby[d+1] = swap;
      }
    }
  }
  
  for(int i=0;i<m;i++){

  printf("%s %s %d %d \n",osoby[i].firstName, osoby[i].secondName, osoby[i].age, osoby[i].salary  );
  }
  printf("\n");
  
  
  for (c = 0 ; c < ( i - 1 ); c++){
    for (d = 0 ; d < i - c - 1; d++)
    {
      if (strcmp(osoby[d].firstName , osoby[d+1].firstName) >0) 
      {
        struct person swap       = osoby[d];
        osoby[d]   = osoby[d+1];
        osoby[d+1] = swap;
      }
    }
  }
  
  for(int i=0;i<m;i++){

  printf("%s %s %d %d \n",osoby[i].firstName, osoby[i].secondName, osoby[i].age, osoby[i].salary  );
  }
  printf("\n");
  
  for (c = 0 ; c < ( i - 1 ); c++){
    for (d = 0 ; d < i - c - 1; d++)
    {
      if (strcmp(osoby[d].secondName , osoby[d+1].secondName) >0) 
      {
        struct person swap       = osoby[d];
        osoby[d]   = osoby[d+1];
        osoby[d+1] = swap;
      }
    }
  }
  
  for(int i=0;i<m;i++){

  printf("%s %s %d %d \n",osoby[i].firstName, osoby[i].secondName, osoby[i].age, osoby[i].salary  );
  }
  printf("\n");
  
  
  
  
	fclose(fr);
	return 0;

}
