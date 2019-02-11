/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Calculates pythagorean triples
 */

#include <stdio.h>

int
main(void)
{
  /* Variables m and n are points received from the user
  * side1, side2, and hypotenuse are calculated based on the formulas below */
  int m, n, side1, side2, hypotenuse;

  /* Gets two points */
  printf("Enter m and n (m > n): ");
  scanf("%d %d", &m, &n);

  /* Calculates the new sides with the formulas: */
  /* side1 = m^2 - n^2 */
  side1 = (m * m) - (n * n);
  /* side2 = 2nm */
  side2 = 2 * m * n;
  /* hypotenuse = m^2 + n^2 */
  hypotenuse = (m * m) + (n * n);

  /* Displays results of the pythagorean triple */
  printf("%d %d %d\n", side1, side2, hypotenuse);

  return (0);
}
