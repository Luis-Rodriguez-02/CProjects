/*
1. Create and run Kernighan and Ritchie’s famous “hello, world” program:
      #include <stdio.h>
      int main(void)
      {
        printf("hello, world\n");
      }
Do you get a warning message from the compiler? If so, what’s needed to make it go away?
*/ 

// Solution -> return 0 at end of main function

/*
Consider the following program: #include <stdio.h>
      int main(void)
      {
        printf("Parkinson's Law:\nWork expands so as to ");
        printf("fill the time\n");
        printf("available for its completion.\n");
        return 0;
}
(a) Identify the directives and statements in this program.
- statements -> everything inside main
- directives -> header files
(b) What output does the program produce
*/

/*
* Write a program that declares several int and float variables—without initializing them—and then
* prints their values. Is there any pattern to the values? (Usually there isn’t.)
*/
#include <stdio.h>
#define PI 3.14
#define VOLUME_SPHERE (4.0f / 3.0f)
int main(void)
{
    /*
    int test;
    float test2;

    printf("%d\n", test);
    printf("%f\n", test2);
    */
    
    /*
    printf("        *\n");
    printf("       *\n");
    printf("      *\n");
    printf(" *   *\n");
    printf("  * *\n");
    printf("   *\n");
    */

    int radius = 10;
    printf("Volume: %.2f", (VOLUME_SPHERE * PI) * (radius * radius * radius));

    return 0;
}
