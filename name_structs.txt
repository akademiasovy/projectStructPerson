#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> //age income name sort struct

struct person {
	int age;
	int salary;
	char firstname[20];
	char lastname[20];
};

main()
{
	/*//defining one struct item
	struct person person1;
	//person1.firstname = "frank"; can't do it this way cuz strings are lame in c.
	strcpy(person1.firstname,"Frank"); //da right way,mon
	person1.age=22;*/
	
	//defining more struct items
	struct person persons[5];
	FILE *fr;
	fr=fopen("employees.dat","r");
	
	if(fr==NULL){ //ready, check, go!
		printf("Error.");
		return 1;
	}
	else{
		
		int i=0,j;
		while(fscanf(fr,"%d%d%s%s",&persons[i].age,&persons[i].salary,&persons[i].firstname,&persons[i].lastname)!=EOF){
			i++;
		}
		
		for(i=0;i<5;i++){
		printf("%d %d %s %s \n",persons[i].age,persons[i].salary,persons[i].firstname,persons[i].lastname);
	}
		fclose(fr);

		
	for(i=1;i<=4;i++){
		for(j=0;j<4;j++){
			if(persons[j].age>persons[j+1].age){
				struct person temp=persons[j];
				persons[j]=persons[j+1];
				persons[j+1]=temp;
		}
	}
}

printf("\n age\n");
for(i=0;i<5;i++){
		printf("%d %d %s %s \n",persons[i].age,persons[i].salary,persons[i].firstname,persons[i].lastname);
	}
	
for(i=1;i<=4;i++){
		for(j=0;j<4;j++){
			if(persons[j].salary>persons[j+1].salary){
				struct person temp=persons[j];
				persons[j]=persons[j+1];
				persons[j+1]=temp;
		}
	}
}

printf("\n salary\n");
for(i=0;i<5;i++){
		printf("%d %d %s %s \n",persons[i].age,persons[i].salary,persons[i].firstname,persons[i].lastname);
	}
	
	for(i=1;i<=4;i++){
		for(j=0;j<4;j++){
			
			if(strlen(persons[j].firstname)>strlen(persons[j+1].firstname)){
				struct person temp=persons[j];
				persons[j]=persons[j+1];
				persons[j+1]=temp;
		}
	}
}

printf("\nfirstname length\n");
for(i=0;i<5;i++){
		printf("%d %d %s %s \n",persons[i].age,persons[i].salary,persons[i].firstname,persons[i].lastname);
	}
	
	return 0;
}

}
