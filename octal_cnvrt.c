#include <stdio.h>

int main(void)
{

    int num_u, div_1, div_2, div_3, div_4, div_5;
    int rem_1, rem_2, rem_3, rem_4, rem_5;

    printf("Welcome to the octal converter: ");
    scanf("%d", &num_u);

    rem_1 = num_u % 8;
    div_1 = num_u / 8;

    rem_2 = div_1 % 8;
    div_2 = div_1 / 8;

    rem_3 = div_2 % 8;
    div_3 = div_2 / 8;

    rem_4 = div_3 % 8;
    div_4 = div_3 / 8;

    rem_5 = div_4 % 8;

    printf("The octal value is: %d%d%d%d%d\n", rem_5, rem_4, rem_3, rem_2, rem_1);

    // im just adding a comment alright.

    // this is just to test the test branch merge

    return 0;
}