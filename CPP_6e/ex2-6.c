/******************************************************************************
 *                                                                            *
 * ex2-6.c                                                                    *
 *                                                                            *
 * Write a program that creates an integer variable called senses. Have the   *
 * program set senses to 6. Also have the program calculate what 1/3 of       *
 * senses is and what senses cubed is. The program should print all three     *
 * values, identifying them.                                                  *
 *                                                                            *
 ******************************************************************************/

#include <stdio.h>

/*  main()
 *      Set the senses variable, do some math, and print the result.
 */
int main(void)
{
    int senses, third, cubed;
    senses = 6;                         // set variable
    third = senses/3;                   // 1/3
    cubed = senses * senses * senses;   // cube

    printf("Senses:\t%d\nThird:\t%d\nCubed:\t%d\n", senses, third, cubed);

    return 0;
} // main()

