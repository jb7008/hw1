/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Estimates temperature in a freezer given the elapsed time
 */

#include <stdio.h>

/* Number of minutes in an hour */
#define MINS_IN_HOUR (60.0)

int
main(void)
{
  /* Variables to hold the number of hours and minutes since power failure */
  int hours, mins;
  /* Variables to hold the elapsed time using factional minutes and the 
   * temperature in the freezer given elapsed_time */
  float elapsed_time, temp;

  /* Gets hours and minutes since power failure */
  printf("Enter the time since power failure (HH MM): ");
  scanf("%d %d", &hours, &mins);

  /* Converts hours and minutes into hour with fractional minutes */
  elapsed_time = hours + (mins / MINS_IN_HOUR);
  /* Calculates temperature with formula T = (4t^2)/(t+2) - 20 */
  temp = (4 * (elapsed_time * elapsed_time)) / (elapsed_time + 2) - 20;

  /* Displays temperature to the user */
  printf("Temperature is: %.1f\n", temp);

  return (0);
}
