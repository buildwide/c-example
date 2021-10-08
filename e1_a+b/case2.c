// q1-case2: input t<=100 input t's a,b & output a+b (a,b<=10000)

#include <stdio.h>
int main()
{
    int t, a, b;
    do
    {
        printf("Input 0<t<=100 : t=");
        scanf("%d", &t);
    } while (t > 100 || t <= 0);

    while (t--)
    {
        do
        {
            printf("Input a <= 10000:");
            scanf("%d", &a);
        } while (a > 10000);
        do
        {
            printf("Input b <= 10000:");
            scanf("%d", &b);
        } while (b > 10000);
        printf("Output a+b=:%d\n",a+b);
        
    }
    
    return 0;
}