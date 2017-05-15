/******************************************************************************
 *                                                                            *
 * ex2-4.c                                                                    *
 *                                                                            *
 * Write a program that produces the following output:                        *
 *      Happy birthday to you!                                                *
 *      Happy birthday to you!                                                *
 *      Happy birthday, dear programmer!                                      *
 *      Happy birthday to you!                                                *
 * Have the program use two user-defined functions in addition to main():     *
 * one named happy() that prints the "Happy birthday" line, and one named     *
 * dear() to print the "dear programmer" line.                                *
 *                                                                            *
 ******************************************************************************/

#include <stdio.h>

/*  Function Prototypes  */
void happy(void);
void dear(void);

/*  main()
 *      Print the song lines in order.
 */
int main(void)
{
    happy();
    happy();
    dear();
    happy();

    return 0;
} // main()

/*  happy()
 *      print "Happy birthday to you!"
 */
void happy(void)
{
    printf("Happy birthday to you!\n");
} // happy()

/*  dear()
 *      print("Happy birthday, dear programmer!"
 */
void dear(void)
{
    printf("Happy birthday, dear programmer!\n");
} // dear()
