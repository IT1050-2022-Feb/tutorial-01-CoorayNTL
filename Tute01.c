/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include<stdio.h>

int main()
{
float Marks1=0;
float  Marks12=0;
float Average_ofMarks =0;

printf("Enter Subject one mark : ");
scanf("%d" ,&Marks1);
printf("Enter Subject two mark : ");
scanf("%d" ,&Marks2);

Average_ofMarks=Marks1+Marks2/2.0;

printf("/nAverage of Marks = %.2f" ,Average_ofMarks);

}
