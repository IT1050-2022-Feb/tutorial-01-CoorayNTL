/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include<stdio.h>
int minimum(int Number1, int Number2);
int maximum(int Number1, int Number2);
int multiply(int Number1, int Number2);
int main() 
{
	
int no1, no2;

printf("Enter a value for no 1 : "); 
scanf("%d", &no1);

printf("Enter a value for no 2 : "); 
scanf("%d", &no2);

printf("%d ", minimum(no1, no2)); 
printf("\n%d ", maximum(no1, no2)); 
printf("\n%d ", multiply(no1, no2)); 


return 0;

}

int minimum(int Number1, int Number2)
{
	
	if(Number1<Number2)
	{
		return Number1;
	}
	else if(Number1>Number2)
	{
		return Number2;
	}
}

int maximum(int Number1, int Number2)
{
	
	if(Number1>Number2)
	{
		return Number1;
	}
	else if(Number1<Number2)
	{
		return Number2;
	}
}
int multiply(int Number1, int Number2)
{
	
	return Number1*Number2;
}
