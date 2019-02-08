/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Outputs information for the labels the hospital pharmacy places on 
 * bags of I.V. medication
 */

#include <stdio.h>

/* Number of minutes in an hour */
#define MINS_IN_HOUR 60.0

int
main(void)
{
  /* Variables for the volume of I.V. to be infused and the time over which it 
   * should be infused */
  int infusion_amt, mins;
  /* Variables to hold minutes converted to hours and the rate in ml/hr to 
   * infuse the I.V. */
  float hours, infusion_rate;

  /* Gets amount of I.V. to be infused */
  printf("Volumne to be infused (ml) => ");
  scanf("%d", &infusion_amt);

  /* Gets time over which it should be infused in minutes */
  printf("Minutes over which to infuse => ");
  scanf("%d", &mins);

  /* Adds padded line for formatting */
  printf("\n");

  /* converts number of minutes to hours */
  hours = mins / MINS_IN_HOUR;

  /* Calculates how much I.V. to infuse per hour */
  infusion_rate = infusion_amt / hours;

  /* Displays the volume to be infused and the rate of the infusion */
  printf("VTBI: %d ml\n", infusion_amt);
  printf("Rate: %.1f ml/hr\n", infusion_rate);

  return (0);
}
