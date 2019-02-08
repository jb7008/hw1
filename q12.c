/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 *
 * Calculates the acceleration of a jet fighter launched
 * from an aircraft carrier catapult
 */

#include <stdio.h>
/* Conversion factor for converting from KPH to M/S */
#define KPH_TO_MPS_CONVERSION_FACTOR 1000/3600.0

int
main(void)
{
  /* Variables used from program input olding the speed required 
  * for takeoff (kph) and the distance allowed for takeoff (m) */
   int takeoff_speed, distance;
  /* Variables for required acceleration (m/s), time it takes to
   * takeoff (s), and the speed of the plane at takeoff in m/s */
   float acceleration, time, takeoff_speed_mps;

   /* Get takeoff speed and distance */
  printf("Enter takeoff speed (kph) and distance (m): ");
  scanf("%d %d", &takeoff_speed, &distance);

  /* Converts takeoff_speed from kph to m/s */
  takeoff_speed_mps = takeoff_speed * KPH_TO_MPS_CONVERSION_FACTOR;
  /* Uses derived equation a = v^2/2s */
  acceleration = (takeoff_speed_mps * takeoff_speed_mps) / (2 * distance);
  /* Finds how long the takeoff takes */
  time = takeoff_speed_mps / acceleration;

  /* Displays acceleration and time */
  printf("Acceleration: %.2f m/s^2\n", acceleration);
  printf("Time: %.2f s\n", time);

  return (0);
}
