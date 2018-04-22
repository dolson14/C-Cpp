/** ex2-5.c
 *
 *  Write a program that produces the following output:
 *      Bolivia, Italy, France, Japan
 *      Bolivia, Japan,
 *      Italy, France
 *  Have the program use three user-defined functions in addition to main():
 *  one named bo() that prints "Bolvia" once, one named ja() that prints
 *  "Japan" once, and one named itfr() that prints "Italy, France" once. Let
 *  main() take care of any additional printing tasks.
 */

#include <stdio.h>

/*  Function Prototypes  */
void bo(void);
void ja(void);
void itfr(void);

/** main()
 *      Print the desired output using a combination of function calls and
 *      printf() statements.
 */
int main(void)
{
    bo();               // First line
    printf(", ");
    itfr();
    printf(", ");
    ja();
    printf("\n");

    bo();               // Second line
    printf(", ");
    ja();
    printf(",\n");

    itfr();             // Third line
    printf("\n");

    return 0;
} // main()

/** bo()
 *      print "Bolivia"
 */
void bo(void)
{
    printf("Bolivia");
} // bo()

/** ja()
 *      print "Japan"
 */
void ja(void)
{
    printf("Japan");
} // ja()

/** itfr()
 *      print "Italy, France"
 */
void itfr(void)
{
    printf("Italy, France");
} // itfr()

