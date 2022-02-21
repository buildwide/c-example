// input a,b exchange a,b output a,b until no input
#include <stdio.h>
int main()
{
    int a, b, e;
    while (scanf("%d %d", &a, &b) == 2)
    {
        e = a;
        a = b;
        b = e;
        printf("a=%d,b=%d\n", a, b);
    }

    return 0;
}
