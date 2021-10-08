// q2 input n(n<=65535) output 1+2+...+n \n until no input
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int s;
    unsigned int n, sum;
    do
    {
        s = scanf("%d", &n);
        if (s)
        {
            sum = n * (n + 1) / 2;
            printf("Output:%d\n", sum);
        }
    } while (s && 0 <= n && n <= 65535);
    return 0;
}
