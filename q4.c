/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Converts a temperature in Fahrenheit to Kelvin
 */

#include <stdio.h> /* Includes printf and scanf */

int
main(void)
{
  int fahrenheit; /* Holds the input fahrenheit temperature */
  double kelvin; /* Holds the converted Kelvin temperature */

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
