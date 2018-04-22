/** ex2-7.c
 *
 *  Write a program that produces the following output:
 *      One!
 *      Two!Two!
 *      Three!Three!Three!
 *      Two!Two!
 *      One!
 *  Have the program define functions that display each of "One!", "Two!", and
 *  "Three!" once, and have the program use the functions as needed.
 */

#include <stdio.h>

/*  Function Prototypes  */
void one(void);
void two(void);
void three(void);

/** main()
 *      Make the function calls and print newlines when needed.
 */
int main(void)
{
    one();                          // first line
    printf("\n");

    two();                          // second line
    two();
    printf("\n");

    three();                        // third line
    three();
    three();
    printf("\n");

    two();                          // fourth line
    two();
    printf("\n");

    one();                          // fifth line
    printf("\n");

    return 0;
} // main()

/** one()
 *      print "One!"
 */
void one(void)
{
    printf("One!");
} // one()

/** two()
 *      print "Two!"
 */
void two(void)
{
    printf("Two!");
} // two()

/** three()
 *      print "Three!"
 */
void three(void)
{
    printf("Three!");
} // three()

