//e5-a1: input a output a's absolute value
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, o;
    while (scanf("%d", &a) == 1)
    {
        puts("Input a:");
        if (a >= 0)
        {
            o = a;
        }
        else
        {
            o = a * -1;
        }
        printf("a's absolute value is:%d\n", o);
    }

    return 0;
}
