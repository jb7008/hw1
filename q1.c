/*
 * Programmer : Josh Booth   Date : Feb 7 , 2019
 * Instructor : Professor Hou      Class : ENGR 120 - 03
 * Program to calculate reimbursement from driving a certain distance
 */

#include <stdio.h> /* Includes printf and scanf */
#define REIMBURSEMENT_RATE 0.35 /* Amount reimbursed per mile */

int
main(void)
{
  int odo_start, /* Contains beginning odometer reading */
    odo_end; /* Contains ending odometer reading */
  float traveled_miles, /* Total miles traveled */
  reimbursement; /* Needed reimbursement amount */

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
