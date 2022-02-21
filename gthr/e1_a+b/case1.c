// Q1-case1:input a & b  output a+b a,b<=10000

#include <stdio.h>

int main()
{
    int a, b;
    do
    {
        printf("input a<10000:");
        scanf("%d", &a);
    } while (a > 10000);
    do
    {
        printf("input b<10000:");
        scanf("%d", &b);
    } while (b > 10000);
    printf("output: a + b = %d\n", a + b);
    return 0;
}
