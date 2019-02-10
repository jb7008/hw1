/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Calculates pythagorean triples
 */

#include <stdio.h> /* Includes printf and scanf */

int
main(void)
{
  int point1, /* Point 1 recieved from user */
    point2, /* Point 2 received from user */
    side1, /* Side 1 of the pythagorean triple */
    side2, /* Side 2 of the pythagorean triple */
    hypotenuse; /* Hypotenuse of the pythagorean triple */

  /* Gets two points */
  printf("Enter m and n (m > n): ");
  scanf("%d %d", &point1, &point2);

  /* Calculates the new sides with the formulas: */
  /* side1 = m^2 - n^2 */
  side1 = (point1 * point1) - (point2 * point2);
  /* side2 = 2nm */
  side2 = 2 * point1 * point2;
  /* hypotenuse = m^2 + n^2 */
  hypotenuse = (point1 * point1) + (point2 * point2);

  /* Displays results of the pythagorean triple */
  printf("%d %d %d\n", side1, side2, hypotenuse);

  return (0);
}
