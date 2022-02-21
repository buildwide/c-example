// input a,b exchange a,b output a,b until no input
#include <stdio.h>
int main()
{
    int a, b;
    while (scanf("%d %d", &a, &b) == 2)
    {
        printf("a=%d,b=%d\n", b, a);
    }

    return 0;
}
