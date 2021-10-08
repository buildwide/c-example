// q2 input n(n<=65535) output 1+2+...+n \n until no input
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, s, sum;
    do
    {
        printf("Input n<=65535:");
        s = scanf("%d", &n);
        if (s)
        {
            sum = 0;
            if (n % 2 == 0)
            {
                sum = n / 2 * (n + 1);
            }
            else
            {
                sum = (n + 1) / 2 * n;
            }
            printf("Output:%d\n", sum);
        }

    } while (s && 0 <= n && n <= 65535);
    return 0;
}
