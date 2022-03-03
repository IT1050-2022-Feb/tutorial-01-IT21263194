/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */
#include <stdio.h>

int main() {
  int marks,i;
  float average = 0;
  for(i=1;i<=2;i++)
  {
    printf("enter the marks of subject %d :",i);
    scanf("%d",&marks);
    average = average + marks;


  }
   average = average/2;

   printf("%.2f",average);
  
  return 0;
}
