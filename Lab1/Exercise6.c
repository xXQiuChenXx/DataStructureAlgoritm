#include <stdio.h>

int main()
{
    int m, n, sum = 0;
    printf("Enter the value of m: ");
    scanf("%d", &m);
    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (m > n)
    {
        printf("Invalid range: m value cannot be greater than n value\n");
        return 0;
    }

    for (int i = m; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of numbers from %d to %d is %d \n", m, n, sum);
    return 0;
}