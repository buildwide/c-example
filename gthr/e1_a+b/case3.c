// q1-case3: input a,b<=10000 output a+b until no input
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, s;
    do
    {
        do
        {
            printf("Input a,b<=10000\n");
            s = scanf("%d %d", &a, &b);
        } while (a > 10000 || b > 10000);
        printf("a+b=%d\n", a + b);

    } while (s == 2);
    return 0;
}