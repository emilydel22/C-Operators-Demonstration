/* EEL 2880 HW3 – Operators
 * Emily D. Delgado Gonzalez
 * Program shows expression results for 14 operators and includes date/time
 */

#include <stdio.h>
#include <time.h>

int main(void)
{
    int A, B;
    int Result;
    time_t rawtime = time(NULL);   /* line 8 analogue */

    /* Prompt for inputs (use 7 and 9 when you run it) */
    printf("Input value for A: ");   /* prompt for first value */
    scanf("%d", &A);                /* read input */

    printf("Input value for B: ");   /* prompt for second value */
    scanf("%d", &B);                /* read input */

    /* Print time and date (line 16 requirement) */
    printf("\nOperators %s\n", ctime(&rawtime));

    /* 1. Addition */
    Result = A + B;
    printf("1) A + B = %d\n", Result);

    /* 2. Subtraction */
    Result = A - B;
    printf("2) A - B = %d\n", Result);

    /* 3. Multiplication */
    Result = A * B;
    printf("3) A * B = %d\n", Result);

    /* 4. Modulus */
    Result = A % B;
    printf("4) A %% B = %d\n", Result);

    /* 5. Equality */
    Result = (A == B);
    printf("5) A == B : %d\n", Result);

    /* 6. Greater Than */
    Result = (A > B);
    printf("6) A > B : %d\n", Result);

    /* 7. Less Than or Equal */
    Result = (A <= B);
    printf("7) A <= B : %d\n", Result);

    /* 8. Logical And */
    Result = (A && B);
    printf("8) A && B : %d\n", Result);

    /* 9. Preincrement */
    Result = ++A;   /* object = ++object (expression result stored) */
    printf("9) ++A -> Result = %d (A is now %d)\n", Result, A);

    /* 10. Postincrement */
    Result = B++;   /* object = object++ (expression result stored) */
    printf("10) B++ -> Result = %d (B becomes %d)\n", Result, B);

    /* 11. Bitwise And */
    Result = (A & B);
    printf("11) A & B = %d\n", Result);

    /* 12. Bitwise Or */
    Result = (A | B);
    printf("12) A | B = %d\n", Result);

    /* 13. Bitwise Shift Left A */
    Result = (A << 1);
    printf("13) A << 1 = %d\n", Result);

    /* 14. Bitwise Shift Right B */
    Result = (B >> 1);
    printf("14) B >> 1 = %d\n", Result);

    return 0;
}
