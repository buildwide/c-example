// q1-case4: input a,b >0 && <=10000    output a+b until a==0&&b==0
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, s;
    do
    {
        do
        {
            printf("Input a,b >0&&<=10000\n");
            s = scanf("%d %d", &a, &b);
        } while (a > 10000 || a < 0 || b > 10000 || b < 0);
        printf("a+b=%d\n", a + b);
    } while (s == 2 && (a || b));
    printf("no input || input a,b == 0 terminate\n");
    return 0;
}
