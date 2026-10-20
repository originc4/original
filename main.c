#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double first;
    double second;

    puts("C Starter: Addition");
    printf("Enter two numbers separated by a space: ");

    if (scanf("%lf %lf", &first, &second) != 2) {
        fputs("Invalid input. Please enter two numbers.\n", stderr);
        return EXIT_FAILURE;
    }

    printf("%.2f + %.2f = %.2f\n", first, second, first + second);
    return EXIT_SUCCESS;
}
