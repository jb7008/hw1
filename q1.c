/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Program to calculate reimbursement from driving a certain distance
 */

#include <stdio.h>

/* Amount reimbursed per mile */
#define REIMBURSEMENT_RATE 0.35

int
main(void)
{
  /* Variables for beginning and ending odometer readings */
  int odo_start, odo_end;
  /* Variable for the total miles traveled and the needed reimbursement 
   * amount */
  float traveled_miles, reimbursement;

  printf("MILEAGE REIMBURSEMENT CALCULATOR\n");
  /* Gets beginning odometer reading */
  printf("Enter beginning odometer reading: ");
  scanf("%d", &odo_start);

  /* Gets ending odometer reading */
  printf("Enter ending odometer reading: ");
  scanf("%d", &odo_end);

  /* Calculates the total miles traveled */
  traveled_miles = odo_end - odo_start;

  /* Shows user total traveled miles at what reimbursement rate */
  printf("You traveled %.1f miles. At $%.2f per mile.\n", 
    traveled_miles, REIMBURSEMENT_RATE);

  /* Calculates the total reimbursement */
  reimbursement = traveled_miles * REIMBURSEMENT_RATE;

  /* Shows user total reimbursement */
  printf("Your reimbursement is $%.2f.\n", reimbursement);

  return (0);
}
