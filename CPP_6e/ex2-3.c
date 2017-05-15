/******************************************************************************
 *                                                                            *
 * ex2-2.c                                                                    *
 *                                                                            *
 * Write a program that converts the age of the U.S.A. in years to hours and  *
 * displays both values. Don't worry about fractional years or leap-years.    *
 *                                                                            *
 ******************************************************************************/

#include <stdio.h>

/*  main()
 *      Find the current age of the USA.
 *      Convert to hours.
 */
int main(void)
{
    int birth, now, years, hours;
    birth = 1776;
    now = 2017;
    years = 2017-1776;
    hours = years * 365 * 24;

    printf("The U.S.A. is %d years old. That's %d hours!\n", years, hours);

    return 0;
} // main()

