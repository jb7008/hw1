/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Converts a temperature in Fahrenheit to Kelvin
 */

#include <stdio.h>

int
main(void)
{
  /* Variable to hold the input fahrenheit */
  int fahrenheit;
  /* Variable to hold the converted Kelvin temperature */
  double kelvin;

  /* Gets temperature in Fahrenheit from user */
  printf("Enter a temperature in degrees Fahrenheit: ");
  scanf("%d", &fahrenheit);

  /* Uses conversion factor K = (5/9)(fahrenheit - 32) + 273.15 to calculate 
   * temperature Kelvin */
  kelvin = (5.0 / 9.0) * (fahrenheit - 32) + 273.15;

  /* Displays converted Kelvin temperature */
  printf("%d degrees in Fahrenheit is %.2f degrees in Kelvin.\n", 
    fahrenheit, kelvin);

  return (0);
}
