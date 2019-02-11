/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Program to calculate the work of a dam with 90% efficiency
 */

#include <stdio.h>

/* Gravitational constant */
#define g 9.80
/* Mass of one cubic meter of water in kg */
#define CUBIC_METER_WATER_MASS 1000
/* Conversion factor for converting watts to megawatts */
#define MW_CONVERSION_FACTOR 0.000001
/* Conversion factor to convert from 100% efficieny to 90% */
#define PERCENT_90_CONVERSION_FACTOR 0.9

int
main(void)
{
  /* Variables for height of dam in meters, the flow rate in m^3/s, and the mass
   * of the water flowing through */
  int height, flow_rate, water_mass;
  /* Variables to hold work done at 100% efficiency, 90% efficieny, and to hold 
   * the calculation of converting watts to megawatts */
  float work_100p, work_90p, watt_to_mw;

  /* Gets height of the dam */
  printf("Enter height of dam: ");
  scanf("%d", &height);
  /* Gets the flow rate of water */
  printf("Enter rate (m^3/s): ");
  scanf("%d", &flow_rate);

  /* Calculates mass of water knowing the mass of one cubic meter of water is
   * 1000kg */
  water_mass = flow_rate * CUBIC_METER_WATER_MASS;
  /* Calculates total work on water using w=mgh */
  work_100p = water_mass * g * height;
  /* Converts to 90% efficiency */
  work_90p = work_100p * PERCENT_90_CONVERSION_FACTOR;
  /* Converts to MW from W */
  watt_to_mw = work_90p * MW_CONVERSION_FACTOR;
  /* Displays total work done to user */
  printf("Total work: %.2f MW\n", watt_to_mw);

  return (0);
}
