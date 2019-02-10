/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Outputs information for the labels the hospital pharmacy places on 
 * bags of I.V. medication
 */

#include <stdio.h> /* Includes printf and scanf */
#define MINS_IN_HOUR 60.0 /* Number of minutes in an hour */

int
main(void)
{
  int infusion_amt, /* Volume of I.V. to be infused */
    mins; /* Time in mins over which the I.V. should be infused */
  float hours, /* Holds minutes converted to hours */
    infusion_rate; /* Rate in ml/hr to infuse the I.V. */

  /* Gets amount of I.V. to be infused */
  printf("Volumne to be infused (ml) => ");
  scanf("%d", &infusion_amt);

  /* Gets time over which it should be infused in minutes */
  printf("Minutes over which to infuse => ");
  scanf("%d", &mins);

  /* Adds padded line for formatting */
  printf("\n");

  /* Converts number of minutes to hours */
  hours = mins / MINS_IN_HOUR;

  /* Calculates how much I.V. to infuse per hour */
  infusion_rate = infusion_amt / hours;

  /* Displays the volume to be infused and the rate of the infusion */
  printf("VTBI: %d ml\n", infusion_amt);
  printf("Rate: %.1f ml/hr\n", infusion_rate);

  return (0);
}
