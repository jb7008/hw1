/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Calculates magnitude and cost of water saved based on 
 * the community's population
 */

#include <stdio.h>

/* Liters per flush after new toilet installation */
#define NEW_LITERS_PER_FLUSH 2
/* Liters per flush before new toilet installation */
#define OLD_LITERS_PER_FLUSH 15
/* Number of toilets per person in the city */
#define TOILETS_PER_PERSON 1/3.0
/* Number of flushes per day per toilet */
#define FLUSHES_PER_DAY 14
/* Installation cost of a new computer */
#define INSTALL_COST 150

int
main(void)
{
  /* Variable to hold the population of the city */
  int population;
  /* Variables to hold
  * old_liters_per_day - number of liters of water used per day before 
      new toilets were installed
  * new_liters_per_day - number of liters of water used per day after
       new toilets were installed
  * water_savings - how much water will be saved per day
  * replacement_cost - cost of installing all the new toilets
  */
  float old_liters_per_day, new_liters_per_day, water_savings, replacement_cost;

  /* Gets population */
  printf("Enter population: ");
  scanf("%d", &population);

  /* finds old vs. new liters used per day */
  old_liters_per_day = population * TOILETS_PER_PERSON * 
    FLUSHES_PER_DAY * OLD_LITERS_PER_FLUSH;
  new_liters_per_day = population * TOILETS_PER_PERSON * 
    FLUSHES_PER_DAY * NEW_LITERS_PER_FLUSH;
  /* How much water will be saved per day */
  water_savings = old_liters_per_day - new_liters_per_day;
  /* How much it will cost the city to replace 
   * the old toilets with the new ones */
  replacement_cost = population * TOILETS_PER_PERSON * INSTALL_COST;

  /* Displays the estimated water savings and the cost to replace the toilets */
  printf("Estimated water savings: %.1fL\n", water_savings);
  printf("Cost to replace: $%.2f\n", replacement_cost);

  return (0);
}
