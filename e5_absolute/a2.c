//e5-a1: input a output a's absolute value
#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double a;
    while (scanf("%lf", &a))
    {
        printf("a's absolute value is: %.2lf\n", fabs(a));
    }
    return 0;
}
