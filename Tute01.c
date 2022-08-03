/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1=10,mark2=20;
  float average;

  average=(mark1+mark2)/2;

  printf("%.2f",average);
  
  
  return 0;
}

