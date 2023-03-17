#include <stdio.h> 
#include <math.h> 

int main(void) 
{ 
	double a,b,c;
	double x1,x2;
	double delta; 
	
	printf("Enter the value of ' a  ' : "); 
	scanf("%lf", &a); 
	printf("\nEnter the value of ' b  ' : ");
	scanf("%lf", &b);
	printf("\nEnter the value of ' c  ' : ");
	scanf("%lf", &c);
	
	delta=((b*b)-(4 * a * c)); 

	if(a == 0) 
	{ 	
		printf("\nThe variables cannot form a quadratic equation\n\n"); 
	} 
	else if(delta == 0) 
	{ 
		x1=-b / (2 * a);
		x2=x1;
		printf("\nThe roots are real and equal \n"); 	
		printf("\nDiscriminant is equal to %2.2f\n\n",delta);	
		printf("\nRoots are....x1 = %2.1f, x2 = %2.1f\n\n", x1,x2);
	} 
	else if(delta > 0) 
	{ 
	
		x1= (-b + sqrt(delta) ) / (2 * a );	
		x2= (-b - sqrt(delta) ) / (2 * a );
		printf("\nThe roots are real \n"); 	
		printf("\nDiscriminant is equal to %2.2f\n\n",delta);	
		printf("\nRoots are....x1 = %2.1f, x2 = %2.1f\n\n", x1,x2);
	} 
	else 
	{ 
		printf("\nThe roots are imaginary \n") ;
		printf("\nDiscriminant is equal to %2.2f\n\n",delta);
	}
	printf(" \n\n\n\n"
	      "	                                                    *****************\n"
          "			                                    * OMER GOKDERE  *\n"
          "	                                                    *****************\n");

	return 0;
}