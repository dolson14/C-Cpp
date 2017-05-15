/******************************************************************************
 *                                                                            *
 * ex2-1.c                                                                    *
 *                                                                            *
 * Exercise to make use of multiple printf() statements to acheive a          *
 * specific format on the screen output.                                      *
 *                                                                            *
 ******************************************************************************/

#include <stdio.h>

/*  main()
 *      Single printf() statement to print one line
 *      Single printf() statement to print multiple lines
 *      Multiple printf() statements to print one line
 */
int main(void)
{
    /*
     * Single printf(), single line
     */
    printf("Gustav Mahler Gustav Mahler\n");

    /*
     * Single printf(), multiple lines
     */
    printf("Gustav\nMahler\nGustav\nMahler\n");

    /*
     * Three printf()s, single line
     */
    printf("Gustav ");
    printf("Mahler ");
    printf("Gustav Mahler\n");

    return 0;
} // main()

