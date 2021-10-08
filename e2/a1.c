// q2 input n(n<=65535) output 1+2+...+n \n until no input
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, s, sum;
    do
    {
        do
        {
            printf("Input n<=65535:");
            s = scanf("%d", &n);
        } while (s && n > 65535);

        sum = n;
        while (s && n--)
        {
            sum += n;
        }
        
        printf("Output:%d\n",sum);
    } while (s);

    return 0;
}
