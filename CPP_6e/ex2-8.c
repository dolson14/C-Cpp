/** ex2-8.c
 *
 *  In C, one function can call another. Write a program that calls a function
 *  named alpha_echo(). This function should display the word alpha on one
 *  line, call a second function named bravo_delta(), and then display the
 *  word echo on one line. The function bravo_delta() should display the word
 *  bravo and a comma, then call a function named charlie(), then display the
 *  word delta, all on one line together. The function charlie() should just
 *  display the word charlie. The main() function should display the phrase
 *  Begin! before calling alpha_echo(), and then display End! after calling
 *  it. The output should look like the following:
 *      Begin!
 *      Alpha
 *      Bravo, Charlie, Delta
 *      Echo
 *      Done!
 */

#include <stdio.h>

/*  Function Prototypes  */
void alpha_echo(void);
void bravo_delta(void);
void charlie(void);

/** main()
 *      Make the initial call.
 */
int main(void)
{
    printf("Begin!\n");
    alpha_echo();
    printf("Done!\n");

    return 0;
} // main()

/** alpha_echo()
 *      print "Alpha", call bravo_delta(), print "Echo"
 */
void alpha_echo(void)
{
    printf("Alpha\n");
    bravo_delta();
    printf("Echo\n");
} // alpha_echo()

/** bravo_delta()
 *      print "Bravo, ", call charlie(), print "Delta"
 */
void bravo_delta(void)
{
    printf("Bravo");
    printf(", ");
    charlie();
    printf(", ");
    printf("Delta\n");
} //bravo_delta()

/** charlie()
 *      just print "Charlie"
 */
void charlie(void)
{
    printf("Charlie");
} // charlie()

