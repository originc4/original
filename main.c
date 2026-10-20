#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double first;
    double second;

    puts("C 入门示例：加法");
    printf("请输入两个数字，并用空格分隔：");

    if (scanf("%lf %lf", &first, &second) != 2) {
        fputs("输入无效，请输入两个数字。\n", stderr);
        return EXIT_FAILURE;
    }

    printf("%.2f + %.2f = %.2f\n", first, second, first + second);
    return EXIT_SUCCESS;
}
