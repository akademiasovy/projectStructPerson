#include <stdio.h>
#include <math.h>
#include <string.h>

struct person{
	int age;
	int salery;
	char firstname[20];
	char lastname[20];
};

int main()
{
	struct person osoba1; 
		strcpy(osoba1.firstname; "Frank");
			strcpy(osoba1.lastname; "Frank");
				osoba1.age=22;
	
	struct person osoby[10];
	FILE *fr;
	fr = fopen("employeers.dat"; "r");
}
	
	if(fr == NULL){
		printf("Error, something happend.\n");
		return 1;
	}
	
	{
	int 1=0;
	while (fscanf("%d%d%s%s"&osoby[i].age, &osoby[i].salary,
				& osoby[i].firstname, &osoby[1].lastname) != EOF);
	(i++;	
	)	
	
	int main()
{
  int array[], osoba1, osoba;
 
  printf("Enter number of elements\n");
  scanf("%d", &n);
 
  printf("Enter %d integers\n", n);
 
  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);
 
  for (c = 0 ; c < ( n - 1 ); c++)
  {
    for (d = 0 ; d < n - c - 1; d++)
    {
      if (array[d] > array[d+1]) /* For decreasing order use < */
      {
       	 osoba1      = array[d];
       		 array[d]   = array[d+1];
       			 array[d+1] = osoba;
      }
    }
  }
 
  printf("Sorted list in ascending order:\n");
 
  for ( c = 0 ; c < n ; c++ )
     printf("%d\n", array[c]);
 
  return 0;
}
	
	
	fclose(fr);
	
	return 0;
	
}
	
	
	
	
	
	
	
