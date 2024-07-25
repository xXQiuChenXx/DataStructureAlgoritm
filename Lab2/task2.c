#include <stdio.h>

int main()
{
    int n, sum = 0;
    int i = 1;
    float average;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    do
    {
        sum += i;
        i++;
    } while (i <= n);

    printf("Sum of first %d  numbers is %d\n", n, sum);
    printf("Average of first %d numbers is %.2f\n", n, (float)sum / n);

    return 0;
}