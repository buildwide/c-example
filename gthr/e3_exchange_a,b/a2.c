// input a,b exchange a,b output a,b until no input
#include <stdio.h>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    {
        a = a+b;
        b = a-b;
        a = a-b;
        printf("a=%d,b=%d\n", a, b);
    }

    return 0;
}