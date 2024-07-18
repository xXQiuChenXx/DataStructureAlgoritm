#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    float f_num = (float)number;
    printf("The floating point variant of %d is %f \n ", number, f_num);
    return 0;
}