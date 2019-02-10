/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Estimates temperature in a freezer given the elapsed time
 */

#include <stdio.h> /* Includes printf and scanf */
#define MINS_IN_HOUR (60.0) /* Number of minutes in an hour */

int
main(void)
{
  int hours, /* Holds number of hours since power failure */
    mins; /* Holds number of minutes since power failure */
  float elapsed_time, /* Holds elapsed time since power failure using
    * fractional hours */
    temp; /* Temperature in the freezer given elapsed_time */

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
